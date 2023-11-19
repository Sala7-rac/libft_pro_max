#include "libft.h"
#include <stdio.h>
#include <string.h>
//TODO : Create a Structure
//?_____________________first syntax :
typedef struct s_car {
	int		rpm;
	char	serie;
	char	*marque;
} car;
//?_____________________ second syntax :
// struct s_car {
// 	int		rpm;
// 	char	serie;
// 	char	*marque;
// };
// typedef struct s_car car;
//?_____________________ third syntax :
// struct s_car {
// 	int		rpm;
// 	char	serie;
// 	char	*marque;
// };
char 	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	if (!dst || !src)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
//TODO : Assign To Structure Members
int	main(void)
{
		//TODO : Simpler Syntax
		car  mycar = {17, 's', strdup("bmw")};
		// mycar.rpm = 44;
		// mycar.serie = 's';
		// mycar.marque 
	//TODO : Access Structure Members
		printf("car name : %s  \n", mycar.marque);
		printf("car rpm :  %d  \n", mycar.rpm);
		printf("car serie : %c \n", mycar.serie);
	//TODO : What About Strings in Structures?
		char *src  = "kal3os";
		// char dst[8];
		mycar.marque = ft_strcpy(mycar.marque, src);
		printf("________________________________________\n");
		printf("car name : %s  \n", mycar.marque);
		printf("car rpm :  %d  \n", mycar.rpm);
		printf("car serie : %c \n", mycar.serie);
		//TODO : Copy Structures
		car stractos;
		stractos = mycar;
		printf("________________________________________\n");
		printf("car name : %s  \n", stractos.marque);
		printf("car rpm :  %d  \n", stractos.rpm);
		printf("car serie : %c \n", stractos.serie);
		//TODO : Modify Values
		mycar.rpm = 324;
		mycar.serie = 'b';
		mycar.marque = ft_strcpy(mycar.marque,strdup("Dasra"));
		printf("________________________________________\n");
		printf("car name : %s  \n", mycar.marque);
		printf("car rpm :  %d  \n", mycar.rpm);
		printf("car serie : %c \n", mycar.serie);
}


