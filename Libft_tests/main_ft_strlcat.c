ft_strlcat

https://www.youtube.com/watch?v=oxWjeH6FK6I
https://42-cursus.gitbook.io/guide/rank-00/libft/libc-functions/ft_strlcat


#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	while (src[i] != '\0' && (dst_len + i <  dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dstsize - 1] = '\0';
	return (dst_len + src_len);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "helloworld";
	char	d1[] = "goodbye";
	char	d2[] = "goodbye";

	printf("dst before = %s", d1);
	printf("\nlenght of string ft_strlcat tried to create = %lu, %s", ft_strlcat(d1, s, 3), d1);
	printf("\nlenght of string strlcat tried to create = %lu, %s", strlcat(d2, s, 3), d2);
}

