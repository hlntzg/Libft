/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutzig <hutzig@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:19:08 by hutzig            #+#    #+#             */
/*   Updated: 2024/04/22 19:49:10 by hutzig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	convert_c;

	convert_c = (char)c;
	while (*s != '\0' || *s == '\0')
	{
		if (*s == convert_c)
			return ((char *)s);
		else if (*s == '\0')
			break ;
		s++;
	}
	return (0);
}
