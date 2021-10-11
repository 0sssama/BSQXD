/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:19:20 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/11 16:19:20 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global_vars.h"
#include "functions.h"

int	ft_square_valid(t_square square, t_board board)
{
	t_square	*obstacles;
	int			i;

	obstacles = ft_get_obstacles(board);
	i = 0;
	while (obstacles[i].l != 0)
	{
		if ((obstacles[i].x >= square.x && obstacles[i].x <= square.x + square.l - 1)
			&& (obstacles[i].y >= square.y && obstacles[i].y <= square.y + square.l - 1))
			return (0);
		i++;
	}
	return (1);
}