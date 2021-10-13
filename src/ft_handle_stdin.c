/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_stdin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:18:25 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/13 15:08:19 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

void	ft_handle_stdin(void)
{
	char	**map;

	g_size = 30000;
	map = stdin_to_stdout();
	if (!map)
	{
		ft_puterr("map error\n");
		return ;
	}
	ft_bsq(map);
}
