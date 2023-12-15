#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
 {
 	ft_putchar_fd('q', 1);
 	return (0);
 } */