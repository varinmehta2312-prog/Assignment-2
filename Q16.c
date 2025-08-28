#include <stdio.h>
#include <limits.h>
int main() {
    int n = 100;
    int x;
    int mx = INT_MIN, mn = INT_MAX;
    printf("Enter 100 numbers:\n");
    for(int i=0;i<n;i++){ if(scanf("%d",&x)!=1) return 0; if(x>mx) mx=x; if(x<mn) mn=x; }
    printf("Largest = %d, Smallest = %d\n", mx, mn);
    return 0;
}