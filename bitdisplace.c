#include <stdio.h>
#include <limits.h>


int main()
{
	int i;
	unsigned int a =0xABCDEFFF; //numbers for output task1
	unsigned int b=0xF0000000;  //number for logical mult task1
	unsigned int q=0xFFAAFFFF; //numbers for output task2
	unsigned int w=0xFF00FFFF; //numbers for logical mult task2
	unsigned int c;
	
	//task1
	for(i=0;i<8;i++)
	{
		c = a & b;
		printf("%X \n", c);
		a= a << 4;
		c=0;
	}
	
	//task2
	printf("\n%X \n", q);
	q= q&w;
	q= q | 0x00BB0000;
	printf("%X \n", q);

	return 0;
}
