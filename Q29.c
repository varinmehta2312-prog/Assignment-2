#include <stdio.h>
#include <math.h>
int main() {
    int n; printf("Enter an integer (>1): ");
    if(scanf("%d",&n)!=1) return 0;
    if(n<=1){ printf("%d is not prime\n", n); return 0; }
    int isPrime=1;
    for(int i=2;i<= (int)sqrt(n); i++) if(n%i==0){ isPrime=0; break; }
    if(isPrime) printf("%d is prime\n", n); else printf("%d is not prime\n", n);
    return 0;
}