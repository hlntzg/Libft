ft_isascii

int	ft_isascii(int c)
{
    /* the conditional checks if c is an ASCII character, and if it is true, it returns c (non-zero value) */
	if (c >= 0 && c <= 127)
		return (c);
    /* if the previous condition is not true, it reaches this point and returns zero (character tests false) */
	return (0);
}

   /* the main compares the output of the Standard C Library function and the ft function, isascii requires ctype header */
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 128;
	printf("isascii = %d", isascii(c));
	printf("\nft_isascii = %d", ft_isascii(c));
}

