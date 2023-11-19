#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*given_list;
	t_list	*result_list;
	t_list	*head_to_f_elem;

	if (!lst)
		return (NULL);
	given_list = lst;
	result_list = NULL;
	head_to_f_elem = NULL;
	while (given_list)
	{
		content = (*f)(given_list->content);
		result_list = ft_lstnew(content);
		if (!result_list)
		{
			(*del)(content);
			ft_lstclear(&head_to_f_elem, del);
			return (NULL);
		}
		ft_lstadd_back(&head_to_f_elem, result_list);
		given_list = given_list->next;
	}
	return (head_to_f_elem);
}
