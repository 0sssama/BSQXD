/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:16:11 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/13 12:32:32 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"
#include <stdio.h>

void	ft_bsq(char **map)
{
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
			return ;
		}
	}
	else
		ft_putstr("map error\n");
}
