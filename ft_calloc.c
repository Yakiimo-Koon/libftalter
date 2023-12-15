#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*element;

	if (size != 0 && count > (size_t) - 1 / size)
		return (NULL);
	element = malloc(count * size);
	if (!element)
		return (NULL);
	ft_bzero(element, (count * size));
	return (element);
}

/*  int	main(void)
 {
 	#include <stdio.h>
 	#include <string.h>

 	printf("Original: %p\n", calloc(5, 5));
 	printf("Result: %p\n", ft_calloc(5, 5));
 	return (0);
 } */