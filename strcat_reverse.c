#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[50];
    char b[50];
    char c[50];
    char d[50];
    
    char* array[] = {a, b, c, d};
    char result[200];
    
    for(int i = 0; i < 4; i++){
        scanf("%s\n", *(array + i));
    }
    
    char* follow = result;
    
    for(int i = 3; i >= 0; i--){
        char* now = *(array + i);
        
        while(*now != '\0'){
            *follow = *now;
            follow++;
            now++;
        }
    }
    *follow = '\0';
    printf("%s\n", result);
    return 0;
}