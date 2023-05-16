#include "libft.h"

static int skip_space(const char *str)
{
    int i;

    i = 0;
    while (is_space(str[i]))
        i++;
    return (i);
}

int	ft_atoi(const char *str)
{
	long		sum;
	long		sign;
	long		i;

	sum = 0;
	sign = 1;
	i = skip_space(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (is_digit(str[i]))
	{
		sum = sum * 10 + str[i] - 48;
		i++;
	}
    if (str[i])
		ft_panic("Error: atoi has invalid values still");
	if ((sum * sign) > 2147483647 || ((sum * sign) < -2147483648))
		ft_panic("Error: exceeded MAX or MIN int");
	return (sum * sign);
}