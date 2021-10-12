/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_highlight_biggest_square.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:54:17 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/12 21:27:35 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"
#include <stdio.h>

void	ft_highlight_biggest_square(void)
{
	int	i;
	int	j;

	i = g_current_square.y;
	j = g_current_square.x;
	while (i < g_current_square.l + g_current_square.y)
	{
		j = g_current_square.x;
		while (j < g_current_square.l + g_current_square.x)
		{
			g_board.bd[i][j] = first_line[2];
			j++;
		}
		i++;
	}
}
