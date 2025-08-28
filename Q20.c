#include <stdio.h>
int main() {
    int sum=0;
    for(int i=1;i<=100;i++) if(i%3==0) sum+=i;
    printf("Sum of integers from 1 to 100 divisible by 3 = %d\n", sum);
    return 0;
}