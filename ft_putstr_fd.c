#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s && s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*  int	main(void)
 {
	ft_putstr_fd("soleil\n", 1);
	return (0);
 } */