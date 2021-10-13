/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:40:34 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/13 18:00:39 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

void	ft_show_board(void)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= g_board.y)
	{
		j = 0;
		while (j < g_board.x)
			ft_putchar(g_board.bd[i][j++]);
		ft_putchar('\n');
		i++;
	}
}
