#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int my_atoi(char s[]);

int my_atoi(char s[]) {
    int result = 0;
    int i = 0;
    
    while(s[i] != '\0'){
        if(s[i] < '0' || s[i] >'9'){
            return 0;
        }
        if(s[i] >= '0' && s[i] <= '9'){
            result = result * 10 +(s[i] - '0');
        }else {
            break;
        }
        i++;
    }
    return result;
}

int main() {
    char S[1024] = {0};
    fgets(S, sizeof(S), stdin);
    int i = 0;
    
    while(S[i] == ' '){
          i++;
        }
    
    for(int j = 0; S[j] != '\0'; j++) {
        if(S[j] == '\n') {
            S[j]= '\0';
            break;
        }
    }
    
    int result = my_atoi(&S[i]);
    printf("%d", result);
    return 0;
}