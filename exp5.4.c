#include <stdio.h>

int funel() 
{
	printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
static int ai = 5; 
ai++; 
return ai;
}
void main()
{
    int a=funel();
    printf("%d", a); 
    int b = funel();
    printf("%d",b);

}

