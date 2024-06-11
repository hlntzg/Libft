ft_strnstr

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && i < len)
	{
		while (haystack[i+j] == needle[j] && haystack[i+j] && i+j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		j = 0;
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "HelloBonjourBye";
	char	find[] = "ll";

	printf("strnstr = %s", strnstr(str, find, 2));
	printf("\nft_strnstr = %s", ft_strnstr(str, find, 2));
}

