#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	char		*str;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

/*  int	main(void)
 {
 	#include <stdio.h>
 	#include <string.h>

 	printf("Original: %s\n", strdup("salut"));
 	printf("Result: %s\n", ft_strdup("salut"));
 	return (0);
 } */