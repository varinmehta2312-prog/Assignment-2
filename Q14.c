#include <stdio.h>
int main() {
    double x, sum=0;
    printf("Enter 10 values:\n");
    for(int i=0;i<10;i++) { if(scanf("%lf",&x)!=1) return 0; sum+=x; }
    printf("Sum = %.6g, Mean = %.6g\n", sum, sum/10.0);
    return 0;
}