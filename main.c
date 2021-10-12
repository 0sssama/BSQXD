/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:55:36 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/12 21:28:31 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"
#include <stdio.h>

void	ft_reset_g_values(void)
{
	if (g_obstacles)
		free(g_obstacles);
	if (g_board.bd)
		free(g_board.bd);
}

void	ft_init_g_values(char **map)
{
	g_board.bd = map;
	g_board.x = g_x;
	g_board.y = g_y;
	g_board.obs_count = ft_obs_count();
	g_obstacles = ft_get_obstacles();
}

int	main(int ac, char **av)
{
	char	**map;
	int		i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			g_size = 30000;
			//ft_reset_g_values();
			map = read_input(av[1]);
			if (!map)
			{
				ft_putstr("map error.\n");
				return (0);
			}
			ft_extract(map[0]);
			if (g_y != 0 && ft_map_valid(map))
			{
				ft_init_g_values(map);
				if (ft_core())
				{
					ft_highlight_biggest_square();
					ft_show_board();
				}
				else
				{
					ft_putstr("no valid square :( try another map!\n");
					return (0);
				}
			}
			else
				ft_putstr("map error.\n");
			i++;
		}
	}
	else
	{
		ft_putstr("No input. Feature not yet added XD\n");
		// standard input
	}
	return (0);
}

/*
 * > get input			[X]
 * > map valid			[X]
 * > core				[ ]
 * > highlight square	[ ]
 */