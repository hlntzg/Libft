ft_strchr

it does not return a fundamentally new string in memory, it returns the position in the original string.
CONST CHAR *str  >> this means we have a mutable pointer, so we can change what this parameter is pointing to, but we can not change the values (the keyword const make clear that we are not gonna change the contents of the string).
It should return a char pointer type, so the return pointer is been casting to a char pointer (in this way we make sure we return a correct pointer type if the string has been modified elsewhere)  

char	*ft_strchr(const char *s, int c)
{
	char	convert_c;
	
	convert_c = (char) c;
	while (*s != '\0' || *s == '\0')
	{
		if (*s == c)
			return ((char *) s);
		else if (*s == '\0')
			break ;
		s++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s;
	int		c;

	s = "HelloGoodbye";
	c = '\0';
	printf("strchr %s when looking for %c", strchr(s, c), c);
	printf("\nft_strchr %s when looking for %c", ft_strchr(s, c), c);
}

