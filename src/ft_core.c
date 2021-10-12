int core(void) {
    g_current_square.l = min(g_x, g_y);
    g_current_square.x = 0;
    g_current_square.y = 1;

    while(g_current_square.l > 0) {
		printf("Checking squares of L = %d\n", g_current_square.l);
        while(g_current_square.y + g_current_square.l <= g_y)
        {
            g_current_square.x = 0;
            while(g_current_square.x + g_current_square.l <= g_x)
            {
                if (ft_square_valid(g_current_square, g_board))
                {
                    return 0;
                }
                (g_current_square.x)++;
            }
            (g_current_square.y)++;
        }
        (g_current_square.l)--;
        (g_current_square.x) = 0;
        (g_current_square.y) = 1;
    }

	return 1;
}
