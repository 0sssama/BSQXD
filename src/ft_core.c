/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_core.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:36:47 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/12 21:13:20 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"
#include <stdio.h>

int	ft_core(void)
{
    g_current_square.l = ft_min(g_x, g_y);
    g_current_square.x = 0;
    g_current_square.y = 1;

    while(g_current_square.l > 0) {
        while(g_current_square.y + g_current_square.l <= g_y)
        {
            g_current_square.x = 0;
            while(g_current_square.x + g_current_square.l <= g_x)
            {
                if (ft_square_valid(g_current_square))
                {
                    return 0;
                }
                (g_current_square.x)++;
            }
            (g_current_square.y)++;
        }
        (g_current_square.l)--;
        (g_current_square.x) = 0;
        (g_current_square.y) = 1;
    }

	return 1;
}
