#include <stdio.h>
int main() {
    long n; printf("Enter an integer: ");
    if(scanf("%ld",&n)!=1) return 0;
    long t = n<0? -n : n;
    long rev=0, temp=t;
    while(temp>0){ rev = rev*10 + temp%10; temp/=10; }
    if(rev == t) printf("%ld is a palindrome\n", n);
    else printf("%ld is not a palindrome\n", n);
    return 0;
}