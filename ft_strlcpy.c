/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutzig <hutzig@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:54:47 by hutzig            #+#    #+#             */
/*   Updated: 2024/04/22 13:21:03 by hutzig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = 0;
	while (*(src + src_len) && (dstsize - 1))
	{
		*dst = *(src + src_len);
		dst++;
		src_len++;
		dstsize--;
	}
	*dst = '\0';
	while (*(src + src_len))
		src_len++;
	return (src_len);
}
