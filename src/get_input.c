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
	int	fd;
	char *buff;
	char **map;
	int ret;
	int size;
	int	red_size;

	fd = open(input, O_RDWR);
	size = 30000;
	buff = (char *)malloc(size * sizeof(char));
	if (buff == 0)
		return 0;
	while((ret = read(fd, buff, size))) {
		red_size += ret;
		printf("LOOP, size of ret = %d\n", red_size);
	}

	close(fd);
	fd = open(input, O_RDWR);
	printf("MAX SIZE = %d\n", ret);

	buff = (char *)malloc((red_size+1) * sizeof(char));
	if (!buff)
	{
		printf("WTTF malloc error\n");
		return 0;
	}
	read(fd, buff, red_size);

	printf("LOOP finished\n");
	map = ft_split(buff, "\n");
	return (map);
}
