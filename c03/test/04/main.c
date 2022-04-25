
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char str[] = "42 1337 Estamos en la piscina de Málaga";
	char find[] = "piscina";
	printf("%s", ft_strstr(str, find));
}
