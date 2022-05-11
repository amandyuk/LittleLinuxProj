#include <stdio.h>
#include "calc.h"

const int add = 0;
int main()
{
	int a = 1, b = 2;
	int c = eval(a,b, add);
	printf("EXECUTED!\n");
	return c;
}	
