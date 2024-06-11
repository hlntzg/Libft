ft_isalnum

    /* must include the header with the set of functions */
#include "libf.h"

int	ft_isalnum(int c)
{
    /* the conditional checks the two preceedings functions, and if they are true, it return c (non-zero value)*/
	if (ft_isalpha(c) || ft_isdigit(c)) /* if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) */
		return (c);
	/* if it reaches this point, it returns zero as the character tests is false */
    return (0);
}

    /* the main compares the output of the Standard C Library function and the ft function, isalnum requires ctype header */
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = ' ';
	printf("isalnum = %d", isalnum(c));
	printf("\nft_isalnum = %d", ft_isalnum(c));
}

