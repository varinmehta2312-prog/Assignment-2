#include <stdio.h>
int main() {
    long n; printf("Enter an integer: ");
    if(scanf("%ld",&n)!=1) return 0;
    long t = n<0? -n : n;
    int sum=0;
    while(t>0){ sum += t%10; t/=10; }
    printf("Sum of digits = %d\n", sum);
    return 0;
}