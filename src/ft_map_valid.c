/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_valid_backup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:09:33 by fathjami          #+#    #+#             */
/*   Updated: 2021/10/12 16:47:49 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

int	ft_charset(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 3)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_char_exists(char c, char *str)
{
	return (c == str[0] || c == str[1] || c == str[2]);
}

int	ft_onlychar(char **map)
{
	int	i;
	int	j;
	int	size;

	i = 1;
	size = ft_strlen(map[1]);
	while (i < g_y)
	{
		j = 0;
		while (j < size)
		{
			if (!(ft_char_exists(map[i][j], first_line)))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_map_valid(char **map)
{
	return (ft_charset(first_line) && ft_break(map)
		&& ft_length(map) && (map[1][0] != '\0') && ft_onlychar(map));
}
