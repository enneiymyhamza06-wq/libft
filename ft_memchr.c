#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	c = (unsigned char)c;
	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "hello";
// 	char	*result;

// 	result = ft_memchr(str, 'o', );
// 	if (result != NULL)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("Not found\n");
// 	return (0);
// }