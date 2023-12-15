#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[i] && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*int	main()
{
	char a[6] = "pie";
	char b[4] = "apple";
	size_t x = 4;

	printf("%zu\n", ft_strlcpy(a, b, x));
	printf("%zu\n", strlcpy(a, b, x));
}*/