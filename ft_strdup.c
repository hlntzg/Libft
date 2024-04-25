/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutzig <hutzig@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:24:51 by hutzig            #+#    #+#             */
/*   Updated: 2024/04/24 17:19:03 by hutzig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str_copy;
	int		i;

	str_copy = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str_copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str_copy[i] = s1[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}
