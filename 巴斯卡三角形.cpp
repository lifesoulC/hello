#include <stdio.h>
#define N 9/*最多打到十二行*/
long combi(int n, int r){
    int i;
    long p = 1;
    for(i = 1; i <= r; i++)
        p = p * (n-i+1) / i;
    return p;
}
int main() {
    int n, r, t;
    for(n = 0; n <= N; n++) {
        for(r = 0; r <= n; r++) {
            int i;/* 排版设定开始 */
            if(r == 0) {  
                for(i = 0; i <= (N-n); i++) 
                    printf("   ");
            }else {
                printf("   ");
            } /* 排版设定结束 */
            printf("%3d", combi(n, r));
        }
        printf("\n");
    }
}
 

