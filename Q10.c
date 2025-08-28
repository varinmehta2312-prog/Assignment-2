#include <stdio.h>
int main() {
    int n; printf("Enter a non-negative integer: ");
    if(scanf("%d",&n)!=1) return 0;
    unsigned long long fact=1;
    for(int i=1;i<=n;i++) fact *= i;
    printf("%d! = %llu\n", n, fact);
    return 0;
}