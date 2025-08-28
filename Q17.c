#include <stdio.h>
int main() {
    int n = 200, x;
    int pos=0, neg=0, zer=0;
    printf("Enter 200 integers:\n");
    for(int i=0;i<n;i++){ if(scanf("%d",&x)!=1) return 0; if(x>0) pos++; else if(x<0) neg++; else zer++; }
    printf("Positive = %d, Negative = %d, Zero = %d\n", pos, neg, zer);
    return 0;
}