#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct      s_list
{
    char            *tab;
    struct s_list   *next;
}                   t_list;

size_t          ft_strlen(const char *str)
{
    size_t      len;

    len = 0;
    while (str[len])
        len += 1;
    return (len);
}

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	index;

	index = 0;
	while (index < len && src[index] != 0)
	{
		dst[index] = src[index];
		index += 1;
	}
	while (index < len)
		dst[index++] = 0;
	return (dst);
}

size_t          bypass_flag(char *format)
{
    size_t      len;

    len = 0;
    while (format[len] != 'c' && format[len] != 's' && format[len] != 'p' && format[len] != 'd'
    && format[len] != 'i' && format[len] != 'o' && format[len] != 'u' && format[len] != 'x'
    && format[len] != 'X' && format[len] != 'f')
        len += 1;
    return (len);
}

char            *ft_nstr(char *str, size_t len)
{
    char        *new_s;
    size_t      i;

    i = 0;
    if (!(new_s = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (i < len)
    {
        new_s[i] = str[i];
        i += 1;
    }
    return (new_s);
}

char	*ft_strdup(const char *s)
{
	size_t	index;
	size_t	length;
	char			*str;

	length = ft_strlen(s);
	index = 0;
	if (!(str = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	while (index < length)
	{
		str[index] = s[index];
		index += 1;
	}
	str[index] = 0;
	return (str);
}

static int		s_management(char **new_str, char *s1, char *s2)
{
	if (s1 == NULL)
	{
		if (!(*new_str = ft_strdup(s2)))
			return (-1);
		return (1);
	}
	else if (s2 == NULL)
	{
		if (!(*new_str = ft_strdup(s1)))
			return (-1);
		return (2);
	}
	return (0);
}

char			*ft_strjoinf(char *s1, char *s2, int flag)
{
	char	*tmp;
	char	*new_str;
	int		len_s1;
	int		len_s2;

	if (s_management(&new_str, s1, s2) != 0)
		return (new_str);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(new_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1))))
		return (NULL);
	tmp = new_str;
	ft_strncpy(new_str, s1, len_s1);
	ft_strncpy(&new_str[len_s1], s2, len_s2 + 1);
	if (flag == 1 || flag == 3)
		free(s1);
	if (flag == 2 || flag == 3)
		free(s2);
	return (new_str);
}

size_t  print_final(char *format, t_list *list)
{
    size_t  len;
    size_t  i;
    char    *s_final;

    if (*format == 0)
        return (0);
    len = 0;
    i = 0;
    s_final = NULL;
    while (format[i] != 0)
    {
        if (format[i] == '%' && format[i + 1] != '%')
        {
            s_final = ft_strjoinf(s_final, ft_nstr(format + i - len, len), 1);
            i += bypass_flag(format + 1);
            s_final = ft_strjoinf(s_final, list->tab, 1);
            len = 0;
        }
        i += 1;
        len += 1;
    }
    s_final = ft_strjoinf(s_final, ft_nstr(format + i - len, len), 1);
    len = ft_strlen(s_final);
    write(1, s_final, len);
    free(s_final);
    return (len);
}

int main()
{
    t_list  *list;
    t_list  *n1;
    t_list  *n2;
    t_list  *n3;
    char *format;

    list->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    list->tab = "wallah";
    n1->tab = "starfoullah";
    n2->tab = "Hamdoulilah";
    n3->tab = "WULULU";
    format = "Salut je %s test ma %89d fonction %#09.32f%%%c voila%5x";
    printf("%zu\n", print_final(format, list));
    return (0);
}