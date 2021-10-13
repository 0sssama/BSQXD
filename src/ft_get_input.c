/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:56:55 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/13 12:32:39 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

char	**stdin_to_stdout(void)
{
	char	*buff;
	char	**map;
	char	c;
	int		i;

	i = 0;
	buff = (char *)malloc(1001051 * sizeof(char));
	if (buff == 0)
		return (0);
	c = 't';
	while (c != 0 && i <= 1001050)
	{
		read(STDIN_FILENO, &c, 1);
		buff[i++] = c;
	}
	buff[i] = '\0';
	map = ft_split(buff, "\n");
	free(buff);
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
	ret = read(fd, buff, g_size);
	while (ret)
	{
		read_size += ret;
		ret = read(fd, buff, g_size);
	}
	close(fd);
	fd = open(input, O_RDWR);
	buff = (char *)malloc((read_size + 1) * sizeof(char));
	ret = read(fd, buff, read_size);
	buff[ret] = 0;
	map = ft_split(buff, "\n");
	free(buff);
	return (map);
}
