#include "../includes/global_vars.h"

int ft_fill_example(void) {

    char * b = "...............................o..................................o.............................................o.....................................o............................................o..............o.......o.......o................";
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < X)
    {
        while(j < Y) {
            board.bd[i][j] = b[k++];
            j++;
        }
        i++;
    }

}
