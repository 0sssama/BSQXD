/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_obs_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:04:06 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/11 17:04:06 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global_vars.h"

int	ft_obs_count(t_board board)
{
	int	x;
	int	y;
	int	count;

	y = 0;
	count = 0;
	while (y < board.y)
	{
		x = 0;
		while (x < board.x)
		{
			if (board.bd[y][x] == first_line[1])
				count++;
			x++;
		}
		y++;
	}
	return (count);
}
