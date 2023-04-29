#include "header.h"

int main()
{	
	//int *ptr;
	int Var_1;
	int var_2;

	//ptr = &num;
	//printf("value is: %d", *ptr);
	printf("Enter the two value: ");
	scanf("%d %d", &Var_1,&var_2);
	
	add_function(Var_1, var_2);

	return 0;
}
