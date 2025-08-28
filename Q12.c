#include <stdio.h>
int main() {
    char name[100]; int n;
    printf("Enter your name: ");
    scanf("%99s", name);
    printf("Enter times n: ");
    if(scanf("%d",&n)!=1) return 0;
    for(int i=0;i<n;i++) printf("%s\n", name);
    return 0;
}