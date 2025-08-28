#include <stdio.h>
int main() {
    int n; printf("Enter a positive integer: ");
    if(scanf("%d",&n)!=1) return 0;
    int sum=0;
    for(int i=1;i<=n/2;i++) if(n%i==0) sum+=i;
    if(sum==n) printf("%d is a perfect number\n", n);
    else printf("%d is not a perfect number\n", n);
    return 0;
}