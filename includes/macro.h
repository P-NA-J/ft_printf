/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macro.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 10:00:13 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/26 14:22:54 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACRO_H

# define MACRO_H
# define PLUS_FLAG (1 << 0)
# define MINUS_FLAG (1 << 1)
# define SPACE_FLAG (1 << 2)
# define SHARP_FLAG (1 << 3)
# define ZERO_FLAG (1 << 4)
# define H_FLAG (1 << 5)
# define HH_FLAG (1 << 6)
# define MINL_FLAG (1 << 7)
# define MINLL_FLAG (1 << 8)
# define MAJL_FLAG (1 << 9)
# define C_FLAG (1 << 10)
# define S_FLAG (1 << 11)
# define P_FLAG (1 << 12)
# define D_FLAG (1 << 13)
# define I_FLAG (1 << 14)
# define O_FLAG (1 << 15)
# define U_FLAG (1 << 16)
# define X_FLAG (1 << 17)
# define BIGX_FLAG (1 << 18)
# define F_FLAG (1 << 19)
# define NB_AUTH_C 27
# define NB_OPT 5
# define NB_SIZE 3
# define NB_CONV 10
# define TRUE 1
# define FALSE 0
# define UNCHANGED -1
# define BUFF_SIZE 10
# define PRECISION 0
# define LMC 1
# define MAX(a,b) (a > b ? a : b)
# define MIN(a,b) (a < b ? a : b)
#endif
