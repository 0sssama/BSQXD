#ifndef GLOBAL_VARS_H
# define GLOBAL_VARS_H

// it was X
unsigned int	g_x;

// it was Y
unsigned int	g_y;

typedef struct s_square {
    int x;
    int y;
    int l;
} t_square;

typedef struct s_board {
    int x;
    int y;
    int obs_count;
    char **bd;
} t_board;

t_board g_board;
t_square g_current_square;
t_square *g_obstacles;

// EMPTY - OBSTACLE - FULL
char first_line[4];

#endif
