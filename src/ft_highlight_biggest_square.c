void ft_highlight_biggest_square(void) {

	int i;
	int j;

	i = g_current_square.y;
	j = g_current_square.x;
	while(i < g_current_square.l + g_current_square.y) {
		j = g_current_square.x;
		while(j < g_current_square.l + g_current_square.x) {
			g_board.bd[i][j] = first_line[2];
			j++;
		}
		i++;
	}
}
