#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s && s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}

/*  int	main(void)
 {
 	ft_putendl_fd("coco chanel", 1);
 	return (0);
 }
  */