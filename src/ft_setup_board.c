#include "../includes/global_vars.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

t_square *ft_get_obstacles(t_board board)
{
	t_square	*output;
	int			x;
	int			y;
	int			i;

	output = (t_square *) malloc((board.obs_count+1) * sizeof(t_square));
	i = 0;
	y = 0;
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
			}
			x++;
		}
		y++;
	}
	output[i].l = 0;
	return (output);
}

int	ft_square_valid(t_square square, t_board board)
{
	t_square	*obstacles;
	int			i;

	obstacles = ft_get_obstacles(board);
	i = 0;
	while (obstacles[i].l != 0)
	{
		if ((obstacles[i].x >= square.x && obstacles[i].x <= square.x + square.l - 1)
			&& (obstacles[i].y >= square.y && obstacles[i].y <= square.y + square.l - 1))
			return (0);
		i++;
	}
	return (1);
}

int min(int a, int b) {
    if (a < b)
        return a;
    return b;
}

int core(void) {
    current_square.l = min(X, Y);
    current_square.x = 0;
    current_square.y = 0;

    while(current_square.l > 0) {
        while(current_square.y + current_square.l <= Y)
        {
            current_square.x = 0;
            while(current_square.x + current_square.l <= X)
            {
                if (ft_square_valid(current_square, board))
                {
                    return 0;
                }
                (current_square.x)++;
            }
            (current_square.y)++;
        }
        (current_square.l)--;
        (current_square.x) = 0;
        (current_square.y) = 0;
    }
}


int main(void) {
    

    char * b = "...............................o..................................o.............................................o.....................................o............................................o..............o.......o.......o................";
    int i = 0;
    int j = 0;
    int k = 0;

    strcpy(first_line, ".ox");

    while(i < X)
    {
        j = 0;
        while(j < Y) {
            board.bd[i][j] = b[k++];
            j++;
        }
        i++;
    }

    board.x = X;
    board.y = Y;
    board.obs_count = 8;

    t_square test_square;
    test_square.x = 0;
    test_square.y = 0;
    test_square.l = 5;
    core();
    printf("X %d\n", current_square.x);
    printf("Y %d\n", current_square.y);
    printf("L %d\n", current_square.l);
}
