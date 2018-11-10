#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char*)s);
	while (s[i] != (char)c && i >= 0)
		i--;
	if (s[i] != (char)c)
		return (0);
	else
		return ((char*)s + i);
}
