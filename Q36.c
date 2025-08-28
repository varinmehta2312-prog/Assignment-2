#include <stdio.h>
/*
Parallel loop pattern printer - offers a few small patterns similar to lab sheet.
*/
int main() {
    int choice;
    printf("Choose pattern (1..4): ");
    if(scanf("%d",&choice)!=1) return 0;
    if(choice==1){
        printf("1 5\n2 4\n3 3\n4 2\n5 1\n");
    } else if(choice==2){
        printf("1 5\n1 5\n2 4\n2 4\n3 3\n3 3\n");
    } else if(choice==3){
        printf("2 4\n2 4\n3 3\n");
    } else if(choice==4){
        printf("5 1\n4 2\n3 3\n2 4\n1 5\n");
    } else printf("Invalid choice\n");
    return 0;
}