#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ch[101]; 
    scanf("%s", ch);
    
    char *follow = ch;
    while(*follow != '\0'){
        char current = *follow;
        int count = 1;
        
        while(*(follow+1) == current) {
            count++;
            follow++;
        }
        
        printf("%c%d", current, count);
        follow++;
    }
    
    return 0;
}