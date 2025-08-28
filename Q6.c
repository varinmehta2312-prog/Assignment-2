#include <stdio.h>
int main() {
    int n; printf("Enter n: ");
    if(scanf("%d",&n)!=1) return 0;
    printf("First %d even numbers:\n", n);
    for(int i=2,count=0; count<n; i+=2, count++) printf("%d ", i);
    printf("\n");
    return 0;
}