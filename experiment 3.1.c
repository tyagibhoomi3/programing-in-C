/*Experiment 3: Conditional Statements
3.1.⁠ ⁠Write a C program to check whether a number is Even or ODD*/

#include <stdio.h>
#include <conio.h>
int main() {
    printf("Name - Bhoomi Tyagi\nSAP ID - 590028798\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
    int x;

    
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("%d is Even.\n", x);
    } else {
        printf("%d is Odd.\n", x);
    }

    getch();
    return 0;
}

