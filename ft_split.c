/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_v2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutzig <hutzig@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:24:36 by hutzig            #+#    #+#             */
/*   Updated: 2024/04/28 16:27:08 by hutzig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strs_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	strs_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			i += strs_len(&s[i], c);
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_free(char **result, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	result = malloc(sizeof(char *) * strs_count(s, c) + 1);
	if (!result || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = ft_substr(s, i, strs_len(&s[i], c));
			if (!(result[j++]))
				return (ft_free(result, j));
			i += strs_len(&s[i], c);
		}
		else
			i++;
	}
	result[j] = 0;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	c;
	char	**split;
	int		i;

	i = 0;
	s = "__hello_hi_bye__World__Kavini__";
	c = '_';
	printf("%s\n", s);
	split = ft_split(s, c);
	while (split[i])
	{
		printf("\n%s", split[i]);
		i++;
	}
	return (0);
}*/
