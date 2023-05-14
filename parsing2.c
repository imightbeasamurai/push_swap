#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
}

void get_panic(char *error)
{
	ft_putstr_fd(error, 2);
	exit(EXIT_FAILURE);
}

int is_space(int c)
{
    return (c == ' ');
}

int is_digit(int c)
{
    return (c >= '0' && c <= '9');
}

int is_sign(int c)
{
    return (c == 45 || c == 43);
}

int arg_isnum(char *str)
{
    int i;

    i = 0;
    while (is_space(str[i]))
        i++;
    if (is_sign(str[i]) && is_digit(str[i + 1]))
        i++;
    while (str[i])
    {   
        if (!is_digit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char *av[])
{
    int i;

    i = 1;
    if (ac > 1)
    {
        while (i < ac && av[i])
        {
            if (*av[i] == '\0')
                get_panic("arg isnt a valid number!\n");
            if (arg_isnum(av[i]))
                printf("arg is a valid number!\n");
            else
                get_panic("arg isnt a valid number!\n");
            i++;
        }
    }
    else
        get_panic("invalid args");
    return (0);
}
