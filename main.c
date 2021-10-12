/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:55:36 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/12 18:41:40 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"


void	ft_reset_g_values(void)
{
	g_size = 30000;
	if (g_obstacles)
		free(g_obstacles);
	g_obstacles = ft_get_obstacles();
	g_board.x = g_x;
	g_board.y = g_y;
	g_board.obs_count = ft_obs_count();
}

int	main(int ac, char **av)
{
	char	**map;

	if (ac > 1)
	{
		map = read_input(av[1]);
		if (ft_map_valid(map))
		{
			ft_reset_g_values();
			ft_putstr("map valid.");
		}
		else
			ft_putstr("map error.");
		return (0);
	}
	else
	{
		ft_putstr("No input.\n");
		// standard input
	}
	return (0);
}
// get input
// map valid
// core
// highlight square