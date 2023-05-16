#include "../includes/push_swap.h"

void insert_end(t_node **root, int value)
{
	t_node *new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		exit(1);
	new_node->next = NULL;
	new_node->data = value;
	if (*root == NULL)
	{
		*root = new_node;
		return;
	}
	t_node *curr = *root;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
}

void free_list(t_node **root)
{
	t_node *curr;
	t_node *tmp;

	curr = *root;
	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	*root = NULL;
}


int main (int ac, char *av[])
{
    int i, j;
    char **tmp;
    t_node  *node = NULL;
    i = 1;
    if (ac == 1)
        return (0);
    while (av[i])
    {
        j = skip_space(av[i]);
        if (av[i][j] == '\0')
            ft_panic("Error: arg is empty");
        j = 0;
        tmp = ft_split(av[i], ' ');
        while (tmp[j])
        {
           insert_end(&node, ft_atoi(tmp[j]));
           free (tmp[j++]);
        }
        free (tmp);
        i++;
    }
	t_node *tmpnode = node;
    while (node)
    {
        printf ("%d\n", node->data);
        node = node->next;
    }
	free_list(&tmpnode);
}
