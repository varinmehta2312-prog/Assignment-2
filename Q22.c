#include <stdio.h>
int main() {
    long n; printf("Enter an integer: ");
    if(scanf("%ld",&n)!=1) return 0;
    long t = n<0? -n : n;
    int count = (t==0)?1:0;
    while(t>0){ count++; t/=10; }
    printf("Number of digits = %d\n", count);
    return 0;
}