// Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include <stdio.h>


int main()
{
	printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int a =2;
    {
        int d =2;

    }
    {
    int b=1;
    printf("tring to print variable of global code bloack %d\n" ,a); 
    printf("tring to print variable of primary code bloack %d\n" ,d);
    printf("tring to print variable of secondary code bloack %d\n" ,b)
    printf("tring to print variable of teritery code bloack %d\n" ,c);
    
    }
    {
        int c =2;

    }
}


