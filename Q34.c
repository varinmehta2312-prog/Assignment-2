#include <stdio.h>
int main() {
    int n; printf("Enter n (how many Fibonacci numbers): ");
    if(scanf("%d",&n)!=1) return 0;
    long a=0,b=1;
    for(int i=0;i<n;i++){
        printf("%ld ", a);
        long c = a+b; a=b; b=c;
    }
    printf("\n");
    return 0;
}