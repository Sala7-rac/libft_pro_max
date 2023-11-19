





#include <stdio.h>
int	add(int a, int b)
{
	return (a + b);
}
int	sub(int a, int b)
{
	return (a - b);
}
int	mul(int a, int b)
{
	return (a * b);
}

int	main(void)
{
	int (*fct_ptr_arr[])(int,int) = {add,sub,mul};

	printf("the result for add  is  : %d\n",fct_ptr_arr[0](7,7));
	printf("the result for sub  is  : %d\n",fct_ptr_arr[1](7,7));
	printf("the result for mul  is  : %d\n",fct_ptr_arr[2](7,7));
}