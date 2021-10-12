/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathjami <fathjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:09:33 by fathjami          #+#    #+#             */
/*   Updated: 2021/10/12 10:29:24 by fathjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	g_ch[3];
int		g_lines;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str, int i)
{
	int	res;
	int	j;

	j = 0;
	res = 0;
	while (num(str[j]) && str[j] && j <= i)
	{
		res *= 10;
		res += (int)str[j] - 48;
		j++;
	}
	return (res);
}

void	extract(char *str)
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
		g_ch[count++] = str[i--];
	g_lines = ft_atoi(str, i);
}

int	length(char **map)
{
	int	len;
	int	i;

	len = ft_strlen(map[1]);
	i = 1;
	while (i < g_lines)
	{
		if (ft_strlen(map[i]) != len)
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
	if (i - 1 != g_lines)
		return (0);
	return (1);
}

int	charset(char *str)
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

int	exist(char c, char *str)
{
	return (c == str[0] || c == str[1] || c == str[2]);
}

int	onlychar(char **map)
{
	int	i;
	int	j;
	int	size;

	i = 1;
	size = ft_strlen(map[1]);
	while (i < g_lines)
	{
		j = 0;
		while (j < size)
		{
			if (!(exist(map[i][j], g_ch)))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	valid(char **map)
{
	return (charset(g_ch) && ft_break(map)
		&& length(map) && (map[1][0] != '\0') && onlychar(map));
}
/*
#include <stdio.h>

int main()
{
char **map;

map = stdin_to_stdout();
extract(map[0]);
printf("%dlines\n",g_lines);
puts(g_ch);
printf("\n%d length\n",length(map));
printf("\n%d newlines\n",ft_break(map));
printf("%d onlychar\n",onlychar(map));
printf("%d is valid\n",valid(map));

}*/
