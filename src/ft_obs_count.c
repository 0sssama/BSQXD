int	ft_obs_count(t_board board)
{
	int	x;
	int	y;
	int	count;

	y = 0;
	count = 0;
	while (y < board.y)
	{
		x = 0;
		while (x < board.x)
		{
			if (board.bd[y][x] == first_line[1])
				count++;
			x++;
		}
		y++;
	}
	return (count);
}
