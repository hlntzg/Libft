ft_isprint

int	ft_isprint(int c)
{
	   /* the conditional checks if c is a printable character (including space), and if it is true, it returns c (non-zero value) */
    if (c >= 32 && c <= 126)
		return (c);
    /* if the previous condition is not true, it reaches this point and returns zero (character tests false) */
	return (0);
}

    /* the main compares the output of the Standard C Library function and the ft function, isprint requires ctype header */
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 'Y';
	printf("isprint = %d", isprint(c));
	printf("\nft_isprint = %d", ft_isprint(c));
}

