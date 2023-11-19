#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*cur_node;

	if (!lst)
		return ;
	cur_node = lst;
	del(cur_node->content);
	free(cur_node);
}