#include <stdio.h>

int main() {
    int l, w, i, j;
   
    printf("Enter the length: ");
    scanf("%d", & l);
    printf("Enter the width: ");
    scanf("%d", & w);

    printf("\n");
    for (i = 1; i <= w; i++) {
        for (j = 1; j <= l; j++) {
            
            if (i == 1 || i == w) {
                printf("*");
            }
            
            else {
                
                if (j == 1 || j == l) {
                    printf("*");
                }
                
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}