#include <stdlib.h>
#include <stdio.h>

t_square *ft_get_obstacles(t_board board)
{
	t_square	*output;
	int			x;
	int			y;
	int			i;
	int counter;

	counter = 0;
	output = (t_square *) malloc((board.obs_count + 1) * sizeof(t_square));
	i = 0;
	y = 1;
	while (y < board.y)
	{
		x = 0;
		while (x < board.x)
		{
			if (board.bd[y][x] == first_line[1])
			{
				output[i].x = x;
				output[i].y = y;
				output[i].l = 1;
				i++;
				counter++;

				if(counter == board.obs_count)
					return output;
			}
			x++;
		}
		y++;
	}
	output[i].l = 0;
	return (output);
}
