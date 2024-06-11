ft_strncmp

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "12345";
	char	s2[] = "1234567";
	int		n;

	n = 4;
	printf("strncmp = %d", strncmp(s1, s2, n));
	printf("\nft_strncmp = %d", ft_strncmp(s1, s2, n));
}

