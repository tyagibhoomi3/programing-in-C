/*Experiment 4:loops
4.4. The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years.
Write a program to determine the population at the end of each year in the last decade.*/

#include <stdio.h>
int main() 
{
    printf ("Name- Bhoomi Tyagi\nSAP_ID-590028798\nCourse-BCA\nBatch-6");  
    printf("\n--------------------------------------\n");  
    int y;
    double pop = 100000; 
    double rate = 0.10;          
    printf("Yearly population growth over the last decade:\n");
    for (y = 1; y <= 10; y++) 
    {
        pop = pop + (pop * rate);  
        printf("Year %d: %.0f\n", y, pop);     
    }
    return 0;
}

