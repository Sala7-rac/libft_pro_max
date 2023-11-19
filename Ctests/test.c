#include <inttypes.h>
#include <libc.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/_types/_null.h>

#include "libft.h"

struct s_human
{
	// 8
	int		age; // 4
	char	c[5]; // 4

	// 8
	// 1 of that c[5]

	char	*first_name;// 8
	char	*last_name; // 8
};

typedef struct s_human t_human;

// typedef struct s_node	t_node;

// struct	s_node
// {
// 	void	*data;
// 	t_node	*next;
// };

typedef struct	s_node
{
	void			*data;
	struct s_node	*next;
}	t_node;

int fun(char);
void f(void *d)
{
	printf("delete [%s]\n", d);
}
int main(void)
{
	struct s_human human ;
	static struct s_human human2 = {25, "hamz", "jjj", "hello" };


	human = human2;
	// puts(human2.first_name);
	// void *p = &human;
	// int i = 0;
	// while (i < 32)
	// {
	// 	printf("%d\n", ((char *)p)[i++]);
	// 	if (i % 8 == 0)
	// 		puts("");
	// }
	// printf("%zu", sizeof(struct s_human));

	// t_human *ptr;
	// ptr = &human;
	// (*ptr).age == ptr->age;
	// puts((*ptr).first_name);
	// puts((*ptr).last_name);
	// printf("%d\n", (*ptr).age);
	// puts("");
	// puts(ptr->first_name);
	// puts(ptr->last_name);
	// printf("%d\n", ptr->age);
	
	//lsnew
	t_node *mynode = malloc(sizeof(t_node));
	if (!mynode)
		return (0);
	mynode->data = "samaykom";
	// (*mynode).next =
	mynode->next = NULL;
	t_node *head = mynode;

	//node joj

	t_node *nodetanya = malloc(sizeof(t_node));
	if (!nodetanya)
		return (0);
	char *a = "kda";
	nodetanya->data = a;
	nodetanya->next = mynode;
	head = nodetanya;

	// while (head)
	// {
	// 	printf("%s \n",head->data);
	// 	head = head->next;
	// }

	t_node *akhirnode = malloc(sizeof(t_node));
	if (!akhirnode)
		return (0);
	akhirnode->data = "lastnode";
	akhirnode->next = NULL;

	t_node	*moved_head;
	moved_head = head;

	while (moved_head && moved_head->next != NULL)
		moved_head = moved_head->next;
	moved_head->next = akhirnode;
	
	while (head)
	{
		printf("%s \n",head->data);
		head = head->next;
	}



	int (*f)(char);
	f = fun;
	printf("%d\n", f('\n'));


	// type | ptr dyalna | args
	char *  	(*kda)   		(char const *,unsigned int, size_t);

	kda = ft_substr;
	puts(kda("0123456789", 4, 4));



	return (0);
}


int fun(char c){
	return (c*c);
}