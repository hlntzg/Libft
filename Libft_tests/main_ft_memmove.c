ft_memmove

The two strings may overlap; the copy is always done in a non-destructive manner. Memmove can handle overlapping memory, memcpy can’t. The copy is made in a non-destructive manner (both strings (src and dst) can overlap in memory).
https://42-cursus.gitbook.io/guide/rank-00/libft/libc-functions/ft_memmove.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_src;
	char	*tmp_dst;

	tmp_src = (char *)src;
	tmp_dst = (char *)dst;
	if (tmp_dst > tmp_src)
		while (len--)
			tmp_dst[len] = tmp_src[len];
	else
		while (len--)
			*tmp_dst++ = *tmp_src++;
	return (dst);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = “12345-67890”;
	char	d[] = "hellopoooooooo";
	char	ss[0];
 	char	dd[2];

	printf("memmove = %s", memmove(s+4, s+1, 6));
	printf("\nft_memmove = %s", ft_memmove(s+4, s+1, 2));

//	printf("\nft_memmove = %s", ft_memmove(dd, ss, 2));
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[20] = "12345-67890h";
	char	d[20] = "12345-67890h";
//	char	ss[0];
 //	char	dd[2];

//	printf("memmove = %s\t:\tft_memove = %s", memmove(d + 2, d + 4, 10), ft_memmove(s + 2, s + 4, 10));
	printf("memmove = %s", memmove(d, d + 2, 10));
	printf("\nft_memmove = %s", ft_memmove(s, s + 2, 10));

//	printf("\nft_memmove = %s", ft_memmove(dd, ss, 2));
}
