/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_obstacles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:38:28 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/12 14:38:28 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "functions.h"
#include "global_vars.h"

t_square	*ft_get_obstacles()
{
	t_square	*output;
	int			x;
	int			y;
	int			i;
    int 		counter;

    counter = 0;
	output = (t_square *) malloc((g_board.obs_count + 1) * sizeof(t_square));
	i = 0;
	y = 1;
	while (y < g_board.y)
	{
		x = 0;
		while (x < g_board.x)
		{
			if (g_board.bd[y][x] == first_line[1])
			{
				output[i].x = x;
				output[i].y = y;
				output[i].l = 1;
				i++;
                counter++;
                if (counter == g_board.obs_count)
				{
					output[i].l = 0;
                    return (output);
				}
			}
			x++;
		}
		y++;
	}
	output[i].l = 0;
	return (output);
}
