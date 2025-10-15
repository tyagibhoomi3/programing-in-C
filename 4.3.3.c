#include <stdio.h>

int main() {
	printf("Name - Bhoomi Tyagi\nSAP ID - 590028798 \nCourse - BCA \nBatch - B6"); 
    printf("\n----------------------------------------------------------------\n");
    int i, j, cnt = 1;
    int rows = 5;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            if (j > 1) printf(" ");
            printf("%d", cnt++);
        }
        printf("\n");
    }
    return 0;
}

