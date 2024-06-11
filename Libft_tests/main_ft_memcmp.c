ft_memcmp

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "halle";

	printf("%d", memcmp(s1, s2, 2));
	printf("\n%d", ft_memcmp(s1, s2, 2));
}


	char	s1[] = "\0";
	char	s2[] = "\0";
