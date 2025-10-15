#include <stdio.h>

int main() {
	printf("Name - Bhoomi Tyagi \nSAP ID - 590028798 \nCourse - BCA \nBatch - B6"); 
printf("\n----------------------------------------------------------------\n"); 
    int i, j;
    int n = 5; 
    for (i = 1; i <= n; i++) {
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

