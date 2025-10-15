// Experiment 4: LOOPS
#include <stdio.h>
int main() 
{
    printf("Name - Bhoomi Tyagi\nSAP ID - 590028798\nCourse - BCA \nBatch - B6"); 
    printf("\n----------------------------------------------------------------\n");
    int rows = 5;
    int i, j, space;
    int n = 5;
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (space = 1; space <= n - i; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}

