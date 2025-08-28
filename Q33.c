#include <stdio.h>
#include <string.h>
int main() {
    long n; printf("Enter a non-negative integer: ");
    if(scanf("%ld",&n)!=1) return 0;
    long sq = n*n;
    // convert to strings to compare last digits
    char s1[50], s2[50];
    sprintf(s1, "%ld", n);
    sprintf(s2, "%ld", sq);
    int len1 = strlen(s1), len2 = strlen(s2);
    if(len2>=len1 && strcmp(s2 + len2 - len1, s1)==0) printf("%ld is automorphic (because %ld^2 = %ld)\n", n, n, sq);
    else printf("%ld is not automorphic\n", n);
    return 0;
}