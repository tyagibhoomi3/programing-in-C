/*Experiment 6:Arrays
6.3. WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.*/
#include <stdio.h>
int main()
{
    printf ("Name- Shabdi Srivastava\nSAP_ID-590021135\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int num, count = 0;
    printf("Enter the number whose frequency has to be found: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++) 
    {
        if (arr[i] == num) 
        {
            count++;
        }
    }
    printf("Frequency of %d is: %d\n", num, count);
    return 0;
}
