#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*cur_node;

	if (!lst)
		return ;
	cur_node = lst;
	while (cur_node)
	{
		f(cur_node->content);
		cur_node = cur_node->next;
	}
}