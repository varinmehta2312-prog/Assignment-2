#include <stdio.h>
#include <math.h>
int main() {
    int n; printf("Enter an integer: ");
    if(scanf("%d",&n)!=1) return 0;
    int t = n<0? -n : n;
    int sum=0, temp=t;
    while(temp>0){ int d = temp%10; sum += d*d*d; temp/=10; }
    if(sum==t) printf("%d is an Armstrong number (for sum of cubes of digits)\n", n);
    else printf("%d is not an Armstrong number (for sum of cubes of digits)\n", n);
    return 0;
}