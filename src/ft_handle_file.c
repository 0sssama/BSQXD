/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:13:08 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/13 15:08:13 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

void	ft_handle_file(char *file_name)
{
	char	**map;

	g_size = 30000;
	map = read_input(file_name);
	if (!map)
	{
		ft_puterr("map error\n");
		return ;
	}
	ft_bsq(map);
	ft_reset_g_values();
}
