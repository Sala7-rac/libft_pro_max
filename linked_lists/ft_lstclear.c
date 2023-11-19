#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cur_node;

	if(!lst)
		return ;
	cur_node = *lst;
	while (cur_node)
	{
		del(cur_node->content);
		free(cur_node);
		cur_node = cur_node->next;
	}
	*lst = NULL;
}