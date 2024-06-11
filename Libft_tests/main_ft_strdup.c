ft_strdup

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char	*str_copy;
	int		i;

	str_copy = malloc(sizeof(char) * (strlen(s1) + 1));
	if (!str_copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str_copy[i] = s1[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "hello";

	printf("strdup = %s", strdup(s));
	printf("\nft_strdup = %s", ft_strdup(s));
}

