#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == (char)searchedChar)
			return ((char *)(string + i));
		i++;
	}
	if (string[i] == (char)searchedChar)
		return ((char *)(string + i));
	return (NULL);
}

/*  int	main(void)
 {
 	#include <stdio.h>

 	printf("Result: %s\n", ft_strchr("les pasta de la mama", 'a'));
 	return (0);
 } */