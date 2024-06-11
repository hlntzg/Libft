ft_memchr

size_t n > how many characters deep the function will look for

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	convert_c;
	size_t			i;

	str = (unsigned char *)s;
	convert_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == convert_c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char 	s[] = "ABCDEF";
	int		c = 'F';
	size_t	n = 3;

	printf("memchr %s when looking for %c until %lu bytes", memchr(s, c, n), c, n);  
	printf("\nft_memchr %s when looking for %c until %lu bytes", ft_memchr(s, c, n), c, n);  
}

