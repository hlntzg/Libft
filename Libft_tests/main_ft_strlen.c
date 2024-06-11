ft_strlen

    /* must include the header with the stddef.h file */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	/* declare a variable bigger than an int and assign 0 to it */
    size_t	counter;

	counter = 0;
	/* iterate over all the characters in the string array until the null terminator (\0) */
    while (s[counter])
		counter++;
    /* return the counter value which is the number of character before the terminating \0 */
	return (counter);
}

    /* the main compares the output of the Standard C Library function and the ft function, strlen requires string header */
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s;

	s = "libft";
	printf("strlen = %zu", strlen(s));
	printf("\nft_strlen = %zu", ft_strlen(s));
}

