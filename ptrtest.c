#include <stdio.h>

int main(void)
{
    int sum = 0;
    int num;
    int * psum;
    int * pnum;

    psum = &sum;
    pnum = &num;

    for((*pnum) = 1; (*pnum) <= 10; (*pnum)++)
        (*psum) += (*pnum);

    printf("sum: %d\n", sum);
}