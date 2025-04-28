#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int indexof(char str1[], char str2[]);

int main() {
    char str1[1024], str2[1024];
    
    scanf("%s", str1);
    scanf("%s", str2);
    
    int i = 0;
    for(i = 0; str1[i] != '\0'; i++){
        if(str1[i] == '\n'){
            str1[i] = '\0';
            break;
        }
    }
    
    for(i = 0; str2[i] != '\0'; i++){
        if(str2[i] == '\n'){
            str2[i] = '\0';
            break;
        }
    }
    int result = indexof(str1, str2);
    printf("%d\n", result);
    return 0;
}

int indexof(char str1[], char str2[]){
    int s1_length = strlen(str1);
    int s2_length = strlen(str2);
    
    if(s2_length > s1_length){
        return -1;
    }
    
    for(int i = 0; i <= s1_length - s2_length; i++){
        int j = 0;
        while(j < s2_length && str1[i + j] == str2[j]){
            j++;
        }
        
        if(j == s2_length){
            return i;
        }
    }
    
    return -1;
}