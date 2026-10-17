#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] && (s1[i] == s2[i]) && (n > i)))
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
#include <stdio.h>

int main ()
{
printf("%d\n", ft_strncmp("abc", "abd", 2));   // 0
printf("%d\n", ft_strncmp("abc", "abd", 3));   // - chi la3ba
printf("%d\n", ft_strncmp("abc", "abc", 0));   // 0
printf("%d\n", ft_strncmp("", "", 5));         // 0
}
