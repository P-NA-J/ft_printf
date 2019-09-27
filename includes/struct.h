/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 10:01:45 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/18 06:29:27 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H

# define STRUCT_H

typedef struct		s_buffer
{
	int				count;
	int				buff_i;
	char			buffer[BUFF_SIZE + 1];
}					t_buffer;

typedef struct		s_flag
{
	int				flag;
	int				lmc;
	int				precision;
	int				radical;
	int				prefix;
	long			nb_s;
	unsigned long	nb_u;
	char			*str;
	va_list			arg;
}					t_flag;

typedef struct		s_base
{
	char			*base_t;
	int				base_l;
}					t_base;

typedef struct		s_bigint
{
	uint32_t		len;
	uint32_t		block[27];
}					t_bigint;

static uint32_t		g_power_ten_u32[] =
{
	1,
	10,
	100,
	1000,
	10000,
	100000,
	1000000,
	10000000,
};

static t_bigint		g_power_ten_big[] =
{
	{ 1, { 100000000 } },
	{ 2, { 0x6fc10000, 0x002386f2 } },
	{ 4, { 0x00000000, 0x85acef81, 0x2d6d415b, 0x000004ee, } },
	{ 7, { 0x00000000, 0x00000000, 0xbf6a1f01, 0x6e38ed64,
			0xdaa797ed, 0xe93ff9f4, 0x00184f03, } },
	{ 14, { 0x00000000, 0x00000000, 0x00000000, 0x00000000,
			0x2e953e01, 0x03df9909, 0x0f1538fd,
			0x2374e42f, 0xd3cff5ec, 0xc404dc08, 0xbccdb0da,
			0xa6337f19, 0xe91f2603, 0x0000024e, } },
	{ 27, { 0x00000000, 0x00000000, 0x00000000, 0x00000000,
			0x00000000, 0x00000000, 0x00000000,
			0x00000000, 0x982e7c01, 0xbed3875b, 0xd8d99f72,
			0x12152f87, 0x6bde50c6, 0xcf4a6e70,
			0xd595d80f, 0x26b2716e, 0xadc666b0, 0x1d153624,
			0x3c42d35a, 0x63ff540e, 0xcc5573c0,
			0x65f9ef17, 0x55bc28f2, 0x80dcc7f7, 0xf46eeddc,
			0x5fdcefce, 0x000553f7, } }
};

#endif
