#include <stdio.h>
#define N 5
#define M 11


int main()
{
	int i,j; //var for tasks
	int k=1; //var for numbers in mass
	int array1[3][3]; //massive for task1
	int array2[N];
	int array3[3][3];
	int array4[M][M];
	int l;
	int p;

	//task1
	printf("task 1 \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{
			array1[i][j] = k;
			k++;
			printf("%d", array1[i][j]);
		}
		printf("\n");
	}
	i=0; j=0;

	//task2
	printf("\ntask 2\n");
	for(i = 0;i<N; i++) // input elements of massive
	{
		printf("a[%d] = ", i);
		scanf("%d", &array2[i]);
	}
	
	for(i=0;i<N;i++) //print elements
	{
		printf("%d", array2[i]);
	}
	printf("\n reverse \n");
	for(j=N-1;j>=0;j--) //reverse print
	{
		printf("%d", array2[j]);
	}
	i=0; j=0;

	//task3
	printf("\n task 3 \n");

	for(i=0; i<3; i++)
	{
		for(j=0;j<3;j++)
		{
			array3[i][j] = 1;
			
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<2-i;j++)
		{
			array3[i][j] = 0;
		}
	}

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d",array3[i][j]);
		}
		printf("\n");
	}
	i=0; j=0;

	//task4
	printf("\ntask 4\n");
	i=1;
	p=M/2;
	for(l=1;l<=p;l++)
	{
		for(j=l-1;j<M-l+1;j++) array4[l-1][j] = i++;
		for(j=l;j<M-l+1;j++) array4[j][M-l] =i++;
		for(j=M-l-1;j>=l-1;--j) array4[M-l][j]=i++;
		for(j=M-l-1;j>=l;j--) array4[j][l-1]=i++;
	}
	if(M%2==1) array4[p][p]=M*M;
	for(i=0;i<M;i++)
		for(j=0;j<M;j++)
		{
			printf(" %4d ",array4[i][j]);
			if(j==M-1) printf("\n");
		}

	return 0;
}
