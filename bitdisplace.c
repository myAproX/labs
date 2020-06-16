#include <stdio.h>
#include <limits.h>


int main()
{
	int i;
	unsigned int a =0xABCDEFFF;
	unsigned int b=0xF0000000;
	unsigned int q=0xFFAAFFFF;
	unsigned int c;
	unsigned int w=0xFF00FFFF;

	for(i=0;i<8;i++)
	{
		c = a & b;
		printf("%X \n", c);
		a= a << 4;
		c=0;
	}
	i=0;

	printf("\n\n");
	printf("%X \n", q);
	printf("\n\n");
	q= q&w;
	printf("%X \n", q);

	return 0;
}
