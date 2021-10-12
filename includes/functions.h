/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:56:11 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/12 09:29:31 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


char		**ft_split(char *str, char *charset);
int			ft_obs_count(t_board board);
t_square 	*ft_get_obstacles(t_board board);
int			ft_square_valid(t_square square, t_board board);

#endif
