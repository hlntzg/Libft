ft_tolower

int	ft_tolower(int c)
{
    /* the conditional checks if the argument is a upper-case letter */
	if (c >= 'A' && c <= 'Z')
    /* upper-case letter are indexed 32 less than lower-case, so to return the corresponding lower-case (if there is one), it should add 32 to the given argument */
		return (c + 32);
    /* if the argument is not a upper-case letter, it returns directly c (unchanged argument) */
	return (c);
}

    /* the main compares the output of the Standard C Library function and the ft function, tolower requires ctype header */
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 'A';
	printf("tolower = %d", tolower(c));
	printf("\nft_tolower = %d", ft_tolower(c));
}

