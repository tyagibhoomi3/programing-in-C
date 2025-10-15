//Experiment 4: LOOPS
#include <stdio.h>
int main() 
{
    printf("Name - Bhoomi Tyagi\nSAP ID - 590028798\nCourse - BCA \nBatch - B6"); 
    printf("\n----------------------------------------------------------------\n");
    int i, j;
    for (i = 1; i <= 5; i++) 
    {
        for (j = i; j >= 1; j--) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
