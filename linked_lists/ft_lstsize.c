#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list *cur_node;
	int	kda;

	if (!lst)
		return (0);
	kda = 0;
	cur_node = lst;
	while (cur_node)
	{
		kda++;
		cur_node = cur_node->next;
	}
	return (kda);
}