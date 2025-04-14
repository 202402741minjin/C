#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char input[1001];
    char compare[1001];
    int input_cnt[256] = {0};
    int compare_cnt[256] = {0};
    
    scanf("%s", input);
    scanf("%s", compare);
    
    char* follow = input;
    while(*follow != '\0'){
        input_cnt[(unsigned char)*follow]++;
        follow++;        
    }
    
    char* result = compare;
    while(*result != '\0'){
        compare_cnt[(unsigned char)*result]++;
        result++;
    }
    for(int i = 0; i < 256;i++){
        if(compare_cnt[i] > input_cnt[i]){
            printf("No");
            return 0;
        }
    }
    
    printf("Yes");
    return 0;
}
