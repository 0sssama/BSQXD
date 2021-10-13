/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_vars.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:52:27 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/13 11:05:38 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBAL_VARS_H
# define GLOBAL_VARS_H

typedef struct s_square {
	int	x;
	int	y;
	int	l;
}	t_square;

typedef struct s_board {
	int		x;
	int		y;
	int		obs_count;
	char	**bd;
}	t_board;

t_square	*g_obstacles;
t_board		g_board;
t_square	g_current_square;
char		g_chars[4];
int			g_size;
int			g_x;
int			g_y;

#endif
