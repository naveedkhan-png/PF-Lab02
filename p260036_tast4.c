#include<stdio.h>

int main()
{
	int i = 42;
	char c = 'M';
	float f = 3.141590;
	double d = 98.765432;
	
	printf("Printing varables and their sizes:\n");

	printf("Type_Name\tVariable_value\tSize in Memory\n");
	printf("\n------------------------------------------\n");

	printf("int\t\t %d\t\t %d byte(s)\n", i, sizeof(i));
	printf("char\t\t\'%c\'\t\t%d byte(s)\n",c, sizeof(c));
	printf("float\t\t%f\t%d byte(s)\n",f, sizeof(f));
	printf("double\t\t%f\t%d byte(s)",d, sizeof(d));
	
}		