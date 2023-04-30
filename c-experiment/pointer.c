#include <stdio.h>

int main(void)
{
    int Var_1;
    int Var_2;
    int *Ptr1;
    int **Ptr2;

    Var_1 = 10;

    Ptr1 = &Var_1;
    Ptr2 = &Ptr1;
    *Ptr1 = 20; //changing value of a pointer
    Var_2 = *Ptr1; //If a variable having indirection operation (*Ptr1) will holds the value and address (&) will holds the address of variable

    printf("value of Var_1 = %d\n *Ptr1 = %d\n *Ptr1 = %d\n Var_2 = %d\n  **Ptr2 = %d\n ", Var_1, *Ptr1, Ptr1, Var_2, **Ptr2);

    return 0;
    
}
