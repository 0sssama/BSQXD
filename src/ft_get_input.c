/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:56:55 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/13 10:22:13 by fathjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"
#include <stdio.h>
char	**stdin_to_stdout(void)
{
	char	*buff;
	char	**map;
	//int		ret;
	char c;
	int i;
	
	i = 0;
	buff = (char *)malloc(1000001 * sizeof(char));
    if (buff == 0)
        return 0;
	c = 't';
	while (c != EOF && i < 1000000)
	{
		read(STDIN_FILENO, &c, 1);
		buff[i++] = c;
	}
    //if (ret < 0)
    //    return 0;
    buff[i] = '\0';
	map = ft_split(buff, "\n");
	free(buff);
	return (map);
}

/*
char **stdin_to_stdout(void)
{	
    char	**map;
	char	*buff;
	int		ret;
	int		read_size;
    
    printf("stdin to stdout\n");
	read_size = 0;
	buff = (char *)malloc(g_size * sizeof(char));
	if (buff == 0)
		return (0);
	while ((ret = read(0, buff, g_size)))
		read_size += ret;
	map = ft_split(buff, "\n");
	free(buff);
	return (map);
}
*/

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
	ret = read(fd, buff, read_size);
	buff[ret] = 0;
	map = ft_split(buff, "\n");
	free(buff);
	return (map);
}
