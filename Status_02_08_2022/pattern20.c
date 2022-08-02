#include<stdio.h>

int main()
{
	int i,j,num,val,k=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		val = k;
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			if(k == 1)
				k=0;
			else
				k=1;
		}
		printf("\n");
		if(val == 1)
			k=0;
		else
			k=1;
	}
	return 0;
}