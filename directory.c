#include <stdio.h>
#include <stdlib.h>

struct writer
{
	int age;
	int numb;
	int date;	
};

struct persone
{
	char firstname[20];
	char secondname[20];
	struct writer worker;
};

int main()
{
	printf("\nHello, user.\n");
	struct persone p;
	
		
			printf("\ninput age:\n");
			scanf("%d",&p.worker.age);
			printf("\ninput number:\n");
			scanf("%d",&p.worker.numb);
			printf("\ninput date:\n");
			scanf("%d",&p.worker.date);
			printf("\ninput first name:\n");
			scanf("%s",p.firstname);
			printf("\ninput second name:\n");
			scanf("%s",p.secondname);
		
			printf("\nall struct: \n");
				printf("age %d\nnumber %d\ndate %d\nfirst_name %s\nsecond_name %s\n",p.worker.age,p.worker.numb,p.worker.date,p.firstname,p.secondname);
return 0;
}



