ft_itoa

#include "libft.h"

static int	len_n(int long n)
{
	int count;

	count = 0;
	if (n < 0)
	{	
		count++;
		n = -n;
	}
	if (n == 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			len;
	int long	nb;

	nb = n;
	len = len_n(nb);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[0] = '0';
	if (nb < 0)
	{		
		nb = -nb;
		str[0] = '-';
	}
	i = len;
	while (nb != 0 && i-- > 0)
	{
		str[i] = (nb % 10) + 48;
		nb = nb / 10;
	}
	str[len] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	int	n;

	n = 147483648;
	printf("%s", ft_itoa(n));
}

