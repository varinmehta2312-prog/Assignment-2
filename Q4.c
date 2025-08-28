#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    if(scanf("%d",&n)!=1) return 0;
    printf("First %d natural numbers:\n", n);
    for(int i=1;i<=n;i++) printf("%d ", i);
    printf("\n");
    return 0;
}