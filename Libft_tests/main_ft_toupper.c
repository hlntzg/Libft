ft_toupper

int	ft_toupper(int c)
{
    /* the conditional checks if the argument is a lower-case letter */
	if (c >= 'a' && c <= 'z')
    /* lower-case letter are indexed 32 more than upper-case, so to return the corresponding upper-case (if there is one), it should subtract 32 to the given argument */
		return (c - 32);
    /* if the argument is not a lower-case letter, it returns directly c (unchanged argument) */
	return (c);
}

    /* the main compares the output of the Standard C Library function and the ft function, toupper requires ctype header */
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 'a';
	printf("toupper = %d", toupper(c));
	printf("\nft_toupper = %d", ft_toupper(c));
}

