ft_isdigit

int	ft_isdigit(int c)
{
	 /* the conditional checks if c is decimal digit character, and if it is true, it returns c (non-zero value) */
    if (c >= '0' && c <= '9')
		return (c);
    /* if the previous condition is not true, it reaches this point and returns zero (character tests false) */
    return (0);
}

    /* the main compares the output of the Standard C Library function and the ft function, isdigit requires ctype header */
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 'a';
	printf("isdigit = %d", isdigit(c));
	printf("\nft_isdigit = %d", ft_isdigit(c));
}

