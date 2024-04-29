/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutzig <hutzig@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:31:23 by hutzig            #+#    #+#             */
/*   Updated: 2024/04/29 10:31:05 by hutzig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long int	result;

	sign = 1;
	result = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		str++;
		if (result < 0 && sign == 1)
			return (-1);
		else if (result < 0 && sign == -1)
			return (0);
	}
	return ((int)(result * sign));
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    char *s = "2489920432036854775807111111111111";
    char *str;

    int i = 2;
    while (i < 40)
    {
        str = malloc(i + 1);
        memcpy(str, s, i);
        str[i] = 0;
        printf("%s\n", str);
        printf("%i\n", atoi(str));
        printf("%i\n\n", ft_atoi(str));
        free(str);
        i++;
    }
}
