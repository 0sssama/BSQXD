/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:55:36 by olabrahm          #+#    #+#             */
/*   Updated: 2021/10/13 12:38:03 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

int	main(int ac, char **av)
{
	int		i;

	if (ac == 1)
		ft_handle_stdin();
	i = 1;
	while (i < ac)
	{
		ft_handle_file(av[i]);
		if (i++ != ac - 1)
			ft_putchar('\n');
	}
	return (0);
}
