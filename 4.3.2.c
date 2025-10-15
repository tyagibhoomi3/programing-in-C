//Experiment 4: LOOPS 
#include <stdio.h>

int main() {
    int i, j, k;
    int n = 1;
    
    printf("Name - Bhoomi Tyagi \nSAP ID - 590028798 \nCourse - BCA \nBatch - B6");
    printf("\n--------------------------------------------\n");

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

