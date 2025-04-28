#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    int M;
    int cnt = 0;
    int sum;
    
    scanf("%d %d", &N, &M);
    int ap[N][M];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &ap[i][j]);
        }
    }

    //same line
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < M; j++){
    //         sum = 0;
    //         for(int k = j; k < M; k++){
    //             sum += ap[i][k];
    //             if(sum == 10){
    //                 cnt++;
    //                 break;
    //             }
    //             if(sum > 10){
    //                 break;
    //             }
    //         }
    //     }
    // }
    
    //different line
    // for(int j = 0; j < M; j++){
    //     for(int i = 0; i < N; i++){
    //         sum = 0;
    //         for(int k = i; k < N; k++){
    //             sum += ap[k][j];
    //             if(sum == 10){
    //                 cnt++;
    //                 break;
    //             }
    //             if(sum > 10){
    //                 break;
    //             }
    //         }
    //     }   
    // }
    
    //rectangle line
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            for(int x = i; x < N; x++){
                for(int y = j; y < M; y++){
                    sum = 0;
                    for(int w = i; w <= x; w++){
                        for(int z = j; z <= y; z++){
                            sum += ap[w][z];
                        }
                    }
                    if(sum == 10)
                        cnt++;
                }
            }
        }
    }

    printf("%d", cnt);
    return 0;
}
