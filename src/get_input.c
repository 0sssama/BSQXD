#include "../includes/global_vars.h"
#include "../includes/functions.h"

# define SIZE 29000

char	**stdin_to_stdout(void)
{
	char buff[SIZE];
	char **map;

	read(STDIN_FILENO, buff, SIZE);
	map = ft_split(buff, "\n");
	return (map);
}

char **read_input(char *input)
{
	char buff[SIZE];
	char **map;
	int	fd;

	fd = open(input, O_RDWR);
	read(fd, buff, SIZE);
	map = ft_split(buff, "\n");
	return (map);
}
