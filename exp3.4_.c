// Experiment 3: Conditional Statements 
// 3.4 WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
#include <stdio.h>
int main() 
{
    printf("Name - Bhoomi Tyagi\nSAP ID - 590028798\nCourse - BCA\nBatch - B6"); 
    printf("\n--------------------------------------------\n"); 
    float x1, y1, x2, y2, x3, y3;
    float area;
    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates of point 3 (x3 y3): ");
    scanf("%f %f", &x3, &y3);
    area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
    if (area == 0)
        printf("The points are collinear.\n");
    else
        printf("The points are not collinear.\n");
    return 0;
}
