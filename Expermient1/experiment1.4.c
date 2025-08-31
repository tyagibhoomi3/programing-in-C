#include <stdio.h>
int main(){
    printf ("Name-BHOOMI TYAGI\nSAP_ID-590028798\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Sum = %d\n", x + y);
    printf("Sub = %d\n", x - y);
    printf("Mul = %d\n", x * y);
    printf("Div = %.2f\n", (float)x / y);
    return 0;
}
