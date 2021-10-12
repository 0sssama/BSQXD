/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_valid2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:30:03 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/12 17:43:59 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

void	ft_extract(char *str)
{
	int	len;
	int	i;
	int	count;

	count = 0;
	len = ft_strlen(str);
	if (len < 4)
		return ;
	i = len - 1;
	while (count < 3)
		first_line[count++] = str[i--];
	g_y = ft_atoi(str, i);
}

int	ft_length(char **map)
{
	int	i;

	g_x = ft_strlen(map[1]);
	i = 1;
	while (i < g_y)
	{
		if (ft_strlen(map[i]) != g_x)
			return (0);
		i++;
	}
	return (1);
}

int	ft_break(char **map)
{
	int	i;

	i = 1;
	while (map[i])
		i++;
	if (i - 1 != g_y)
		return (0);
	return (1);
}
