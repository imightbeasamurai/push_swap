#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../libft/libft.h"

typedef struct s_node
{
	int data;
	struct s_node *next;
} t_node;


int skip_space(char *str);


// int			is_correct_input(char **av);
// static int	arg_is_number(char *av);
// int			nbstr_cmp(const char *s1, const char *s2);
// static int	have_duplicates(char **av);
// static int	arg_is_zero(char *av);

// typedef struct s_push
// {

// }	t_push;

// typedef struct s_stack
// {

// }	t_stack;

#endif