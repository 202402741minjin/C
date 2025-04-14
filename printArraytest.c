#include <stdio.h>

int main(void)
{
    int x;
    
    init_zero(&x);
    int arr[3] = {10, 20, 300};
    int cnt = PrintArray(arr, 3);

}

int PrintArray(int arr[], int len) {
    int i;
    for(i = 0, i < len; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

void init_zero(int* i) 
{
    (*i) = 0;
}