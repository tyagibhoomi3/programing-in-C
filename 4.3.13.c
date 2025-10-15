#include <stdio.h>

int main() {
    int i, j, s; 
    printf("Name - Bhoomi Tyagi \nSAP ID - 590028798 \nCourse - BCA \nBatch - B6");
    printf("\n------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        for (s = 0; s < i; s++) {
            printf(" ");
        }
        for (j = 5; j > i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

