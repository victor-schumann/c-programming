#include <stdio.h>
int main() {
    int num, k, rc = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (k = 1; k <= num; ++k) {
        rc += k;
    }

    printf("Sum = %d", rc);
    return 0;
}