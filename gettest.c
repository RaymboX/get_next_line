#include "get_next_line.h"
//#include "get_next_line_bonus.h"


int	main(void)
{
	int	fd[2];
	char	*str;
	int	i;
	int	nb_null = 0;
	
	fd[0] = open("file1", O_RDWR);
	fd[1] = open("file2", O_RDWR);
	str = get_next_line(fd[0]);
	if (str == NULL)
		nb_null += 1;
	i = 0;
	while (nb_null != 10)
	{
		printf("%s", str);
		if (str == NULL)
		{
			printf("\n");
			nb_null += 1;
		}
		else
			nb_null = 0;
		i += 1;
		free(str);
		if (i < 4)
			str = get_next_line(fd[i % 2]);
		else
			str = get_next_line(1000 + i);
	}
	free(str);
	close(fd[0]);
	close(fd[1]);
	return (0);
}
