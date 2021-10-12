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
#include "global_vars.h"
#include <stdio.h> // remove this later!


t_square 	*ft_get_obstacles();
void		ft_highlight_biggest_square(void);
char		**ft_split(char *str, char *charset);
char		*ft_strcpy(char *dest, char *src);
void		ft_highlight_biggest_square(void);
int			ft_core(void);
int			ft_obs_count();
int			ft_square_valid(t_square square);
int			ft_atoi(char *str, int i);
int 		ft_min(int a, int b);
int			ft_strlen(char *str);
int			ft_map_valid(char **map);
int			ft_break(char **map);
int			ft_length(char **map);
void		ft_extract(char *str);
int			ft_onlychar(char **map);
int			ft_char_exists(char c, char *str);
int			ft_charset(char *str);
void		ft_putstr(char *str);
char		**stdin_to_stdout(void);
char		**read_input(char *input);
void		ft_putchar(char c);
void		ft_show_board(void);

#endif
