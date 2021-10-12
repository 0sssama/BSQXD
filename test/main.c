#include "global_vars.h"
#include "functions.h"

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

    ft_strcpy(first_line, ".ox");

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
