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

int			g_obs_x;
int			g_obs_y;
int			g_obs_i;
int			g_counter;

void	ft_fill_output(t_square *output)
{
	output[g_obs_i].x = g_obs_x;
	output[g_obs_i].y = g_obs_y;
	output[g_obs_i++].l = 1;
	g_counter++;
}

t_square	*ft_get_obstacles(void)
{
	t_square	*output;

	g_counter = 0;
	g_obs_i = 0;
	g_y = 1;
	output = (t_square *) malloc((g_board.obs_count + 1) * sizeof(t_square));
	while (g_obs_y <= g_board.y)
	{
		g_obs_x = 0;
		while (g_obs_x < g_board.x)
		{
			if (g_board.bd[g_obs_y][g_obs_x] == g_chars[1])
			{
				ft_fill_output(output);
				if (g_counter == g_board.obs_count)
				{
					output[g_obs_i].l = 0;
					return (output);
				}
			}
			g_obs_x++;
		}
		g_obs_y++;
	}
	output[g_obs_i].l = 0;
	return (output);
}
