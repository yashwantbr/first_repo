#include <stdio.h>

int main(void)
{
    int Var_1;
    int Var_2;
    int *Ptr1;
    int **Ptr2; //Double pointer which holds the address of another pointer

    Var_1 = 10;

    Ptr1 = &Var_1;
    
    Ptr2 = &Ptr1;
    *Ptr1 = 20; //changing value of a pointer
    Var_2 = *Ptr1; //If a variable having indirection operation (*Ptr1) will holds the value and address (&) will holds the address of variable

    printf(" Var_1 = %d\n *Ptr1 = %d\n *Ptr1 = %d\n Var_2 = %d\n **Ptr2 = %d\n ", Var_1, *Ptr1, *Ptr1, Var_2, **Ptr2);

    int arr[5] = {10, 20, 30, 40, 50}; 
    int *arr_ptrVar = &arr[0]; //array pointer
        
    printf("*arr_ptrVar = %d\n", *arr_ptrVar);
    printf("address of arr_ptrVar = %u\n", arr_ptrVar);
    
    arr_ptrVar = arr_ptrVar + 1; //pointer arithmetic
    printf("arr_ptrVar = %d\n", *arr_ptrVar);
    printf("address of arr_ptrVar = %u\n", arr_ptrVar);

    //dangling pointer is a pointer where we use to access the value of a deallocated (free) memory that leads to crash
    //A null pointer in C is a pointer that points to no memory address, or to an invalid memory address. 
    // In other words, it does not point to any actual memory location. 
    // The value of a null pointer is usually represented as the constant NULL, which is defined in the stddef.h header file.
    

    return 0;
    
}
