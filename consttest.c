#include <stdio.h>

int main() 
{
    

}

void const1()
{
    int num = 5;
    const int * ptr = &num;
    //*ptr = 50;
    num = 60;

    const int num = 5;
    int * ptr = &num;
    const int * ptr = &num;

    const int num1 = 5;
    const int num2 = 10;
    const int * ptr = &num1;
    ptr = &num2;
}

void const2() 
{
    int num1 = 5;
    int * const ptr1 = &num1;
    //ptr1 = ptr2;
    //ptr1 = ptr1 + 1;
    //ptr1 = &num2;

    int arr[] = {1, 2, 3};
    int * ptr;
    ptr = arr;
    //arr = ptr;

    int num = 5;
    int * const ptr = &num;
    *ptr = 50;
}