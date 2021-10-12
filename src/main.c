<<<<<<< HEAD
#include "../includes/global_vars.h"
#include "../includes/functions.h"

int main(int ac, char *av[]) {
    int i = 0;
    int j = 0;
    int k = 0;
	g_x = atoi(av[2]);
	g_y = atoi(av[3]) + 1;

	if (ac == 1)
		g_board.bd = stdin_to_stdout();
	else
		g_board.bd = read_input(av[1]);

    strcpy(first_line, ".ox");

	g_board.x = g_x;
    g_board.y = g_y;
    g_board.obs_count = ft_obs_count(g_board);

	g_obstacles = ft_get_obstacles(g_board);

    core();
    printf("X %d\n", g_current_square.x);
    printf("Y %d\n", g_current_square.y);
    printf("L %d\n", g_current_square.l);

	ft_highlight_biggest_square();
	show_board();
}
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:04:50 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/11 17:04:50 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "global_vars.h"
#include "functions.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_board(t_board board)
{
	int	i;
	int	j;

	j = 0;
	while (j < board.y)
	{
		i = 0;
		while (i < board.x)
			ft_putchar(board.bd[j][i++]);
		j++;
		ft_putchar('\n');
	}
}

int	main(void)
{
	char board[2][2] = {
		{'.', 'o'},
		{'o', 'o'}
	};
	t_board input;
	t_square 	*obstacles;
	t_square	testing;

	first_line[0] = '.';
	first_line[1] = 'o';
	first_line[2] = 'x';
	input.x = 2;
	input.y = 2;
	input.bd[0][0] = board[0][0];
	input.bd[0][1] = board[0][1];
	input.bd[1][0] = board[1][0];
	input.bd[1][1] = board[1][1];
	input.obs_count = ft_obs_count(input);
	ft_print_board(input);
	obstacles = ft_get_obstacles(input);
	int	i = 0;
	testing.x = 0;
	testing.y = 0;
	testing.l = 2;
	while (i < input.obs_count)
	{
		printf("%d - %d\n", obstacles[i].x, obstacles[i].y);
		i++;
	}
	printf("%d\n", input.obs_count);
	printf("%s\n", ft_square_valid(testing, input)?"Square is valid!":"Square is invalid!");
}
>>>>>>> d8e5e1f7db2ff1b0f51d1b8eb327b4e485b2063d
