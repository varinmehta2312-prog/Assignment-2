#include <stdio.h>
int main() {
    long n; printf("Enter an integer: ");
    if(scanf("%ld",&n)!=1) return 0;
    long sign = n<0? -1:1;
    long t = n<0? -n : n;
    long rev=0;
    while(t>0){ rev = rev*10 + t%10; t/=10; }
    printf("Reversed number = %ld\n", rev*sign);
    return 0;
}