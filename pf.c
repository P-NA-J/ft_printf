#include <unistd.h>

unsigned long   print_final(t_plist *list, char *format)
{
    unsigned long count;

    count = 0;
    while (*format)
    {
        if (*format == '%' && *(format + 1) != '%')
        {    
            ft_putstr(list->tab);
            while (*format != 'c' && *format != 's' && *format != 'p' && *format != 'd' && *format != 'i' && *format != 'o' && *format != 'u' && *format != 'x' && *format != 'X' && *format != 'f')
                format += 1;
            format += 1;
            count += ft_strlen(list->tab);
            list = list->next;
        }
        ft_putchar(*format);
        count += 1;
        format += 1;
    }
    return (count);
} 

int main()
{
    return (0);
}
