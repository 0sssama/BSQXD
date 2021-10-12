int	ft_square_valid(t_square square, t_board board)
{
	int			i;
	i = 0;
	while (g_obstacles[i].l != 0)
	{
		if ((g_obstacles[i].x >= square.x && g_obstacles[i].x <= square.x + square.l - 1)
			&& (g_obstacles[i].y >= square.y && g_obstacles[i].y <= square.y + square.l - 1))
			return (0);
		i++;
	}
	return (1);
}
