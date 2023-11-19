#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur_node;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
	{
		cur_node = *lst;
		while (cur_node->next)
			cur_node = cur_node->next;
		cur_node->next = new;
	}
	new->next = NULL;
}