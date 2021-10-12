/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:56:55 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/12 19:15:16 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

char	**stdin_to_stdout(void)
{
	char	*buff;
	char	**map;

	buff = (char *)malloc(g_size * sizeof(char));
	read(STDIN_FILENO, buff, g_size);
	map = ft_split(buff, "\n");
	return (map);
}

char	**read_input(char *input)
{
	char	**map;
	char	*buff;
	int		fd;
	int		ret;
	int		read_size;

	fd = open(input, O_RDWR);
	read_size = 0;
	buff = (char *)malloc(g_size * sizeof(char));
	if (buff == 0)
		return (0);
	while ((ret = read(fd, buff, g_size)))
		read_size += ret;
	close(fd);
	fd = open(input, O_RDWR);
	buff = (char *)malloc((read_size + 1) * sizeof(char));
	if (!buff)
		return (0);
	read(fd, buff, read_size);
	map = ft_split(buff, "\n");
	free(buff);
	return (map);
}
