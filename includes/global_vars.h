#ifndef GLOBAL_VARS_H
# define GLOBAL_VARS_H

// The edge length of the provided square.
#define N 8

typedef struct s_square {
    int x;
    int y;
    int l;
} t_square;

char board[N][N];

t_square current_square;

// EMPTY - OBSTACLE - FULL
char first_line[3];

#endif
