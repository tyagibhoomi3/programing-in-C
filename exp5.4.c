#include <stdio.h>

int funel() 
{
	printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
static int ai = 5; //can be called only once
ai++; 
return ai;
}
void main()
{
    int a=funel();
    printf("%d", a); //will print 6 as the call value will be 5 from variable and then it will increase by one becoming 6
    int b = funel();
    printf("%d",b);// now it will print 7 zas the static variable will call 7 as the last time it was used it becpome 7 and static variable constant and can be called at the declaring value only once

}
