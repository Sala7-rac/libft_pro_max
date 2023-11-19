#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cur_node;

	cur_node = lst;

	while (cur_node && cur_node->next)
	{
		cur_node = cur_node->next;
	}
	return (cur_node);
}