#include <stdio.h>
int main() {
    int total = 50;
    int boys=0, girls=0;
    char code;
    printf("Input sex code for %d students (M/F or m/f). Enter one per line:\n", total);
    for(int i=0;i<total;i++){
        scanf(" %c", &code);
        if(code=='M' || code=='m' || code=='1') boys++;
        else if(code=='F' || code=='f' || code=='2') girls++;
    }
    printf("Boys = %d, Girls = %d\n", boys, girls);
    return 0;
}