/*Experiment 3: Conditional Statements
According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/ 
#include<stdio.h>
int main() 
{
    printf("Name - Bhoomi Tyagi\nSAP ID - 590028798\nCourse - BCA\nBatch - B6"); 
    printf("\n--------------------------------------------\n"); 
    int year, leap, normal, total, day;
    printf("Enter a year: ");
    scanf("%d", &year);
    int years = year - 1;
    leap = (years / 4) - (years / 100) + (years / 400);
    normal = years - leap;
    total = (normal * 365) + (leap * 366);
    day = total % 7;
    printf("On 1st January %d, it was ", year);
    switch(day) 
    {
        case 0: 
        printf("Monday"); 
        break;
        case 1: 
        printf("Tuesday"); 
        break;
        case 2: 
        printf("Wednesday"); 
        break;
        case 3: 
        printf("Thursday"); 
        break;
        case 4: 
        printf("Friday"); 
        break;
        case 5: 
        printf("Saturday"); 
        break;
        case 6: 
        printf("Sunday"); 
        break;
    }
    return 0;
}

