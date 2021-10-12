#include "global_vars.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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

int min(int a, int b) {
    if (a < b)
        return a;
    return b;
}

int core(void) {
    g_current_square.l = min(X, Y);
    g_current_square.x = 0;
    g_current_square.y = 0;

    while(g_current_square.l > 0) {
        while(g_current_square.y + g_current_square.l <= Y)
        {
            g_current_square.x = 0;
            while(g_current_square.x + g_current_square.l <= X)
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
        (g_current_square.y) = 0;
    }
}


int main(void) {
    int i = 0;
    int j = 0;
    int k = 0;
	
	g_x = 2;
	g_y = 2;	
	char *b = "oooo";	

    strcpy(first_line, ".ox");

    while(i < Y)
    {
        j = 0;

        while(j < X) {
            g_board.bd[i][j] = b[k++];
            j++;
        }
        i++;
    }
    
    //printf("%s\n", board.bd);

    g_board.x = g_x;
    g_board.y = g_y;
    g_board.obs_count = ft_obs_count(g_board);
    
	g_obstacles = ft_get_obstacles(g_board);

    core();
    printf("X %d\n", g_current_square.x);
    printf("Y %d\n", g_current_square.y);
    printf("L %d\n", g_current_square.l);
}
