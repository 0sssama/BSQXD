/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_obstacles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:20:46 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/11 16:20:46 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global_vars.h"
#include <stdlib.h>
#include <stdio.h>

t_square *ft_get_obstacles(t_board board)
{
	t_square	*output;
	int			x;
	int			y;
	int			i;

	output = (t_square *) malloc(board.obs_count * sizeof(t_square) + 1);
	i = 0;
	y = 0;
	while (y < board.y)
	{
		x = 0;
		while (x < board.x)
		{
			if (board.bd[y][x] == first_line[1])
			{
				output[i].x = x;
				output[i].y = y;
				output[i].l = 1;
				i++;
			}
			x++;
		}
		y++;
	}
	output[i].l = 0;
	return (output);
}
