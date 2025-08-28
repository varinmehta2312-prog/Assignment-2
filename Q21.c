#include <stdio.h>
int main() {
    long n; printf("Enter an integer: ");
    if(scanf("%ld",&n)!=1) return 0;
    long t = n;
    if(t<0) t=-t;
    // store digits then print left to right
    int digs[30], idx=0;
    if(t==0) { printf("0\n"); return 0; }
    while(t>0){ digs[idx++]=t%10; t/=10; }
    for(int i=idx-1;i>=0;i--) printf("%d ", digs[i]);
    printf("\n");
    return 0;
}