/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_obs_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:45:28 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/12 14:45:28 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

int	ft_obs_count(void)
{
	int	x;
	int	y;
	int	count;

	y = 0;
	count = 0;
	while (y <= g_board.y)
	{
		x = 0;
		while (x < g_board.x)
		{
			if (g_board.bd[y][x] == g_chars[1])
				count++;
			x++;
		}
		y++;
	}
	return (count);
}
