/*Experiment 3: Conditional Statements
WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.*/
#include<stdio.h>
int main()
{
    printf ("Name- Bhoomi Tyagi\nSAP_ID-590028798\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");
    int l1,b1,l2,b2,l3,b3;
    printf("Enter the length and breadth of rectangle 1: ");
    scanf("%d %d",&l1,&b1);
    printf("Enter the length and breadth of rectangle 2: ");
    scanf("%d %d",&l2,&b2);
    printf("Enter the length and breadth of rectangle 3: ");
    scanf("%d %d",&l3,&b3);
    int p1=2*(l1+b1);
    int p2=2*(l2+b2);
    int p3=2*(l3+b3);
    int maxPer = (p1 > p2) ? ((p1 > p3) ? p1 : p3) :((p2 > p3) ? p2 : p3);
    printf("The rectangle with the highest perimeter has a perimeter of: %d\n", maxPer);
    return 0;
}

