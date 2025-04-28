#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char p[20][20];
    int x, y, n;
    int a, b;
    int i, j;
    
    scanf("%d %d %d", &x, &y, &n);
    scanf("%d %d", &a, &b);
    
    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            p[i][j] = '0';
        }
    }
    
    for(i = y - n/2; i <= y + n/2; i++){
        for(j = x - n/2; j <= x + n/2; j++){
            if(i >= 0 && i < 20 && j >= 0 && j < 20){
                p[i][j] = 'X';
            }
        }
    }
    
    if(p[b][a] == 'X'){
        p[b][a] = 'D';
    }else{
        p[b][a] = 'A';
    }
    
    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            printf("%c ", p[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
