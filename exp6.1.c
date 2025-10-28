/*Experiment 6:Arrays
6.1. WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.*/
#include <stdio.h>
int main() 
{
    printf ("Name- Bhoomi Tyagi\nSAP_ID-590028798\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");
    int n, i, largest, secLarg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    largest =  arr[0];
    secLarg = arr[0];
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            secLarg = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secLarg && arr[i] < largest) 
        {
            secLarg = arr[i];
        }
    }
    printf("The second largest element is: %d\n", secLarg);
    return 0;
}
