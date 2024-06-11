ft_strlcpy

The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output result as snprintf(3).
”l” in the strlcpy means the length of src. The strlcpy() and strlcat() functions return the total length of the string they tried to create.  For strlcpy() that means the length of src. If the return value its >= dstsize, the output string has been truncated.
You won’t lose information and you will be sure you don’t have any overflow.

The main difference between strncpy and strlcpy is in the return value: while the former returns a pointer to the destination the latter returns the number of characters copied. Another difference is that strlcpy always stores exactly one null in the destination. Strlcpy output is always a null-terminated string.


#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = 0;
	while (*(src + src_len) && (dstsize - 1)) // it is possible to use “—-dstsize”
	{
		*dst = *(src + src_len); // another syntax is *(dst++) = *(src + src_len++);
		dst++;
		src_len++;
		dstsize--;
	}
	*dst = '\0';
	while (*(src + src_len))
		src_len++;
	return (src_len);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "helloworld";
	char	d1[] = "byebye";
	char	d2[5];

	printf("%s", d1);
	printf("\nlength of the src ft_strlcpy \t= %lu, %s", ft_strlcpy(d1, s, 5), d1);
	printf("\nlength of the src strlcpy \t= %lu, %s", strlcpy(d2, s, 5), d2);

}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	//char	s[] = "lorem ipsum dolor sit amet";
	char	s3[] = "This is string";
	char	d1[15];
	char	d2[15];

	//printf("\nlength of the src ft_strlcpy \t= %lu, %s", ft_strlcpy(d1, s, 0), d1);
	//printf("\nlength of the src strlcpy \t= %lu, %s", strlcpy(d2, s, 0), d2);
	printf("\nlength of the src ft_strlcpy \t= %lu, %s", ft_strlcpy(d1, s3, 0), d1);
	printf("\nlength of the src strlcpy \t= %lu, %s", strlcpy(d2, s3, 0), d2);

}*/

