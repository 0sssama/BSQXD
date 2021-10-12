/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:40:45 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/12 16:40:45 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

int	ft_square_valid(t_square square)
{
	int			i;

	i = 0;
	while (g_obstacles[i].l != 0)
	{
		if ((g_obstacles[i].x >= square.x
				&& g_obstacles[i].x <= square.x + square.l - 1)
			&& (g_obstacles[i].y >= square.y
				&& g_obstacles[i].y <= square.y + square.l - 1))
			return (0);
		i++;
	}
	return (1);
}
