#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void compare(int a[], int size);

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d ", &arr[i]);
    }
    compare(arr, size);
    return 0;
}

void compare(int a[], int size){
    int cnt = 1;
    int print = 1;
    for(int i = 1; i < size; i++){
        if(a[i-1] < a[i]){
            cnt++;
            if(print < cnt) 
                print = cnt;
        }else {
            cnt = 1;
        }            
    }

    printf("%d ", print);
}