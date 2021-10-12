#ifndef GLOBAL_VARS_H
# define GLOBAL_VARS_H

# define X 27
# define Y 9

typedef struct s_square {
    int x;
    int y;
    int l;
} t_square;

typedef struct s_board {
    int x;
    int y;
    int obs_count;
    char bd[Y][X];

} t_board;

t_board board;
t_square current_square;
t_square *obstacles;

// EMPTY - OBSTACLE - FULL
char first_line[4];

#endif
