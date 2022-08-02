#include<stdio.h>

int main()
{
	int i,j,num,k=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			if(k == 1)
				k=0;
			else
				k=1;
		}
		printf("\n");
	}
	return 0;
}