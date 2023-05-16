#include "libft.h"

void	ft_panic(char *error)
{
	ft_putstr_fd(error, 2);
	exit(EXIT_FAILURE);
}