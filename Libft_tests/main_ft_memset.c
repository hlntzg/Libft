ft_memset

    /* must include the header with the stdlib.h file */
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = b;
	while (len--)
	{
		*tmp_ptr = (unsigned char)c;
		tmp_ptr++;
	}
	return (b);
}

    #include <stdio.h>
    #include <string.h>
    
    int	main(void)
    {
    	char	str[30];
    
    	printf("memset = %s", memset(str, 'a', sizeof(char) * 3));
    	printf("\nft_memset = %s", ft_memset(str, '0', sizeof(char) * 3));
}

