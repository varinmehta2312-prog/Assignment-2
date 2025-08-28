#include <stdio.h>
int main() {
    int n; printf("Enter n: ");
    if(scanf("%d",&n)!=1) return 0;
    double x, sum=0;
    printf("Enter %d values:\n", n);
    for(int i=0;i<n;i++){ if(scanf("%lf",&x)!=1) return 0; sum+=x; }
    printf("Sum = %.6g, Mean = %.6g\n", sum, sum/n);
    return 0;
}