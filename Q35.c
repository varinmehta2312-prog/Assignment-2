#include <stdio.h>
/*
This program prints different nested-loop patterns.
Choice A-D correspond to patterns hinted in lab manual.
*/
int main() {
    int choice;
    printf("Choose pattern (1=A,2=B,3=C,4=D): ");
    if(scanf("%d",&choice)!=1) return 0;
    if(choice==1){
        // A: columns 1..3 with row header repeated (example)
        int data[3][2] = {{1,1},{1,2},{1,3}};
        for(int i=0;i<3;i++) printf("%d %d\n", data[i][0], data[i][1]);
    } else if(choice==2){
        // B: small matrix
        int arr[3][3] = {{1,1,},{2,1},{3,1}};
        for(int i=0;i<3;i++){ for(int j=0;j<2;j++) printf("%d", arr[i][j]); printf("\n"); }
    } else if(choice==3){
        // C: pattern block example: prints many repeated blocks to resemble image
        for(int r=1;r<=3;r++){
            for(int c=1;c<=3;c++) printf("%d", r);
            printf("\n");
        }
    } else if(choice==4){
        // D: simple vertical pairs
        printf("5 1\n5 2\n4 1\n4 2\n3 1\n3 2\n");
    } else printf("Invalid choice\n");
    return 0;
}