ft_bzero

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = s;
	while (n--)
	{
		*tmp_ptr = 0;
		tmp_ptr++;
	}
}

#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	str1[10];
	char	str2[10];	
	int		i;

	i = 0;
	bzero(str1, sizeof(int)*5);
	while (i < 5)
	{
		printf("%d", str1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_bzero(str2, 5);
	while (i < 5)
	{
		printf("%d", str2[i]);
		i++;
	}
}

