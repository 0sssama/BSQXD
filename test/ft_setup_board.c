#include "global_vars.h"
#include <string.h>
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
    printf("is valid\n");
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
        printf("\n\nL is %d\n\n", current_square.l);
        while(current_square.y + current_square.l <= Y)
        {
            printf("Y is %d\n", current_square.y);
            current_square.x = 0;
            while(current_square.x + current_square.l <= X)
            {
                printf("X is %d\n", current_square.x);
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
    int i = 0;
    int j = 0;
    int k = 0;
    
    char *b = "..o......oo.oo...........................................................o...........................................................................................o...........o.......................o..o....o........................o........";
    strcpy(first_line, ".ox");

    while(i < Y)
    {
        j = 0;

        while(j < X) {
            board.bd[i][j] = b[k++];
            j++;
        }
        i++;
    }
    
    //printf("%s\n", board.bd);

    board.x = X;
    board.y = Y;
    board.obs_count = 12;
    
	obstacles = ft_get_obstacles(board);

    printf("HI\n");
    core();
    printf("HI\n");
    printf("X %d\n", current_square.x);
    printf("Y %d\n", current_square.y);
    printf("L %d\n", current_square.l);
}
