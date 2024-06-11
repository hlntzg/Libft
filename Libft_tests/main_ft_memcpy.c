ft_memcpy

Memcpy can present an undefined behaviour if there is an overlapping (e.g. src and dst are the same string)

    /* must include the header with the stdlib.h file */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	if (!dst && !src)
		return (dst);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (n--)
		*(tmp_dst++) = *(tmp_src++);
	return (dst);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "Hive42";
	char	d1[20];
	char	d2[20];
	
	int		ss[] = {42, 2, 24};
	int		d3[50];
	int		d4[50];
	int		i;

	memcpy(d1, s, sizeof(char)*4);
	printf("memcpy = %s", d1);
	ft_memcpy(d2, s, sizeof(char)*4);
	printf("\nft_memcpy = %s", d2);
	
	i = 0;
	printf("\nmemcpy =");
	memcpy(d3, ss, sizeof(int)*3);
	while (i < 2)
	{
		printf("%d", ss[i]);
		i++;
	}
	i = 0;
	printf("\nft_memcpy =");
	ft_memcpy(d4, ss, sizeof(int)*3);
	while (i < 2)
	{
		printf("%d", ss[i]);
		i++;
	}
}

