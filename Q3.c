#include <stdio.h>
int main() {
    printf("First 10 even numbers:\n");
    for(int i=2,count=0; count<10; i+=2, count++) printf("%d ", i);
    printf("\n");
    return 0;
}