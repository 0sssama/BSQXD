#include "../includes/global_vars.h"


int main(void) {
    current_square.l = N;

    while(current_square.l > 0) {
        while(current_square.y + current_square.l <= N)
        {
            current_square.x = 0;
            while(current_square.x + current_square.l <= N)
            {
                if (ft_square_valid(current_square))
                {
                    return 0;
                }
                (current_square.x)++;
            }
            (current_square.y)++;
        }
        (current_square.l)--;
    }
}
