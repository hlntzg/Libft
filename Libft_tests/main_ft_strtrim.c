ft_strtrim

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		a;
	int		z;

	a = 0;
	z = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (a <= z && ft_strchr(set, s1[a]))
		a++;
	if (a > z)
		return (ft_strdup(s1 + z + 1));
	while (z >= 0 && ft_strchr(set, s1[z]))
		z--;
//	trim = malloc(z - a + 2);
//	if (!trim)
//		return (NULL);
//	ft_strlcpy(trim, &s1[a], z - a + 2);
	trim = ft_substr(s1, a, (z - a + 1));
	return (trim);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*set;

	str = "helenaHELLOhel";
	set = "helena";
	printf("%s",ft_strtrim(str, set));
}*
