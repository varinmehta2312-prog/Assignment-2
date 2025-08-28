#include <stdio.h>
int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%99s", name);
    for(int i=0;i<5;i++) printf("%s\n", name);
    return 0;
}