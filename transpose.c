#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    int M;
    scanf("%d %d", &N, &M);
    int X_m[N][M];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d ", &X_m[i][j]);
        }
    }
    
    int X_n[M][N];
    
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            X_n[i][j] = X_m[j][i];
            printf("%d ", X_n[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}