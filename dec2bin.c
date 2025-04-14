#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    unsigned int N;
    unsigned int X[1000000];
    unsigned int result[1000000];
    unsigned int * p =  X;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d ", p + i);
    }
    
    for(int i = 0; i < N; i++){
        unsigned int k = *(p + i);
        
        if(*(p + i) == 0)
            printf("0");
        
        int j = 0;
        while(k > 0){
            unsigned int temp = 0;
            temp = k%2;
            k /= 2;
            result[j++] = temp;
        }
        
        for(int t = j - 1; t >= 0; t--){
            printf("%d", result[t]);
        }
        j = 0;
        printf("\n");
    }
    
    
    return 0;
}
