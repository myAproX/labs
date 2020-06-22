#include <stdio.h>
#include <stdlib.h>

int main()
{


	int a=270533154; //numb for  task1
	int q=0; //increment for task1
	int i; //for cycle in  task1
	int *ptr; //pointer for  task1
	
	char t='T'; //var for task2
	char b='B'; //var fo task2
	char *tr1; //pointer for task2
	char **tr2; //double pointer for task2

	//task1
	ptr = (int *)&a + 2;
	printf("\ntask 1\n");
	printf("\nvariable а = %d\n", a);	
	printf("\nmemory for variable а= %ld\n",sizeof(a));

	for(i=0;i<=8;i++)
	{
		printf("\n%d byte of a = %X \n",q,*ptr);
		q++;
		ptr++;
	}
	
	//task2
	printf("\ntask 2\n");
	tr1 = &t;
	tr2=&tr1;
	printf("tr2 = %p\n",tr2);
	printf("*tr2 = %p\n",*tr2);
	printf("**tr2=%c\n", **tr2);
	printf("&tr2 = %p\n",&tr2);
	
	tr1 = &b;
	tr2 = &tr1;
	printf("\n\ntr2 = %p\n", tr2);
	printf("*tr2 = %p\n", *tr2);
	printf("**tr2 = %c\n", **tr2);
	printf("&tr = %p\n", &tr2);


	return 0;

}
