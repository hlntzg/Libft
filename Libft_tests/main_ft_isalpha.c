ft_isalpha

int	ft_isalpha(int c)
{
    /* the conditional checks if c (character) is uppercase or lowercase, and if it is true, it returns c (non-zero value) */
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return(c);
    /* if the previous condition is not true, it reaches this point and returns zero (character tests false) */
    return(0);
}

   /* the main compares the output of the Standard C Library function and the ft function, isalpha requires ctype header */
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int c;

	c = ‘a’;
	printf("isalpha = %d", isalpha(c));
	printf("\nft_isalpha = %d", ft_isalpha(c));
}

