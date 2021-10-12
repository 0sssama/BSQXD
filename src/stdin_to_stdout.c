#include <stdio.h>
#include <unistd.h>
#include "ft_split.c"

# define SIZE 29000

char	**stdin_to_stdout(void)
{
	char buff[SIZE];
	char **map;
	int	ret;

	ret = read(STDIN_FILENO, buff, SIZE);
	map = ft_split(buff, "\n");
	return (map);
}
