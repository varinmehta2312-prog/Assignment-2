#include <stdio.h>
int main() {
    printf("First 10 odd numbers:\n");
    for(int i=1,count=0; count<10; i+=2, count++) printf("%d ", i);
    printf("\n");
    return 0;
}