#include <stdio.h>

int main() {
    int s1, s2, s3, total;
    float avg;
    int i;

    for (i = 1; i <= 23; i++) {
        printf("\nEnter marks of 3 subjects for Student %d: ", i);
        scanf("%d %d %d", &s1, &s2, &s3);

        total = s1 + s2 + s3;
        avg = total / 3.0;

        printf("Student %d -> Total = %d, Average = %.2f\n", i, total, avg);
    }

    return 0;
}