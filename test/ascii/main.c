#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_atoi_base(char *str, char *base);

int main(int arc, char **arv)
{
	printf("%d\n", ft_atoi_base("DB", "123456789ABCDEF"));
	return 0;
}
