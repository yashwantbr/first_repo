#include <stdio.h>

int main(void)
{
    int Var_1;
    int Var_2;
    int *Ptr;

    Var_1 = 10;
    Ptr = &Var_1; 
    *Ptr = 20; //changing value of a pointer
    Var_2 = *Ptr; //If a variable having indirection operation (*Ptr) will holds the value and address (&) will holds the address of variable

    printf("value of Var_1 = %d, *Ptr = %d, Var_2 = %d,", Var_1, *Ptr, Var_2);

    return 0;
    
}
