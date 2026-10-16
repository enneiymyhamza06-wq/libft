#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return NULL;
}

#include <stdio.h>

int main ()
{
	char *p;
	p = ft_strchr("heelo",101);
	printf("%p",p);
}
