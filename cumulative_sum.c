#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sum(int arr[], int size);
int main(void) {
    int size;
    scanf("%d", &size);
    int arr[size];
    
    for(int i = 0; i < size; i++){
        scanf("%d ", &arr[i]);
    }
    sum(arr, size);
    
    return 0;
}

void sum(int a[], int cnt){
    int sum = 0;
    for(int j = 0; j < cnt; j++){
        sum += a[j];
        printf("%d ", sum);
    }
}