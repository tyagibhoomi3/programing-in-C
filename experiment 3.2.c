/*Experiment 3: Conditional Statements
3.2. WAP to check if the triangle is valid or not. If the validity is
established, do check if the triangle is isosceles,
equilateral, right angle, or scalene. Take sides of the triangle as input
from a user.*/


#include <stdio.h>
#include <conio.h>

int main() {
    printf("Name - Bhoomi Tyagi\nSAP ID - 590028798\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
    int a, b, c;

    
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is valid.\n");

        
        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        } 
        else {
            printf("It is a Scalene triangle.\n");
        }

      
        if ((a * a + b * b == c * c) ||
            (a * a + c * c == b * b) ||
            (b * b + c * c == a * a)) {
            printf("It is also a Right-angled triangle.\n");
        }

    } else {
        printf("The triangle is NOT valid.\n");
    }
    getch();
    return 0;
}

