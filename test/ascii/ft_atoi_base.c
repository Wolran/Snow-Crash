
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_isspace(int c)
{
	if ((9 <= c && c <= 13) || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	size_t			size;
	int				i;
	unsigned int	nb;
	int				signe;

	size = strlen(base);
	i = 0;
	nb = 0;
	signe = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		else
			signe = 1;
		i++;
	}
	while (ft_in_base(str[i], base) != -1)
	{
		nb = nb * size + ft_in_base(str[i], base);
		i++;
	}
	return (nb * signe);
}
