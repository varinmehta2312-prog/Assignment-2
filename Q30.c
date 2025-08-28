#include <stdio.h>
#include <math.h>
int main() {
    printf("Primes between 1 and 500:\n");
    for(int n=2;n<=500;n++){
        int isPrime=1;
        for(int i=2;i<= (int)sqrt(n); i++) if(n%i==0){ isPrime=0; break; }
        if(isPrime) printf("%d ", n);
    }
    printf("\n");
    return 0;
}