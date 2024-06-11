ft_strrchr 

char	*ft_strrchr(const char *s, int c)
{
	char	convert_c;
	char	*res;

	convert_c = (char)c;
	res = 0;
	while (*s != '\0')
	{
		if (*s == c)
			res = (char *)s;
		s++;
	}
	if (c == '\0')
		res = (char *)s;
	return ((char *) res);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s;
	int		c;

	s = "HelloGoodbye";
	c = 'Z';
	printf("strrchr %s when looking for %c", strrchr(s, c), c);
	printf("\nft_strrchr %s when looking for %c", ft_strrchr(s, c), c);
}

