#include <stdio.h>
int main() {
    int n; printf("Enter n: ");
    if(scanf("%d",&n)!=1) return 0;
    long sum=0;
    for(int i=2,count=0; count<n; i+=2, count++) sum+=i;
    printf("Sum of first %d even numbers = %ld\n", n, sum);
    return 0;
}