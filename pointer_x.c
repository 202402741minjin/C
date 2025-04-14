#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned int a, b, c, d;
    
    //unsigned int* num[] = {a, b, c, d};
    // for(int i = 0; i < 4; i++){
    //     scanf("%u ", &num[i]);
    // }
    scanf("%u %u %u %u", &a, &b, &c, &d);

    
    unsigned int x = 0;
    unsigned char *px = (unsigned char *)&x;
    
    px[0] = *((unsigned char *)&d + 0);
    px[1] = *((unsigned char *)&c + 1);
    px[2] = *((unsigned char *)&b + 2);
    px[3] = *((unsigned char *)&a + 3);
    printf("%u\n", x);
    return 0;
}
