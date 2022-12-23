#include <stdio.h>

int main() {
    // declare variables
    int l, w, i, j;

    // take input
    printf("Enter the length: ");
    scanf("%d", & l);
    printf("Enter the width: ");
    scanf("%d", & w);

    // new line
    printf("\n");

    // display the pattern
    for (i = 1; i <= w; i++) {
        for (j = 1; j <= l; j++) {
            // for the first and last row
            if (i == 1 || i == w) {
                printf("*");
            }
            // except the first and last row
            else {
                // for the first and last column
                if (j == 1 || j == l) {
                    printf("*");
                }
                // for other columns
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}