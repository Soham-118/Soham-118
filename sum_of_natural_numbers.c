#include<stdio.h>
int main()
{
	int sum=0;
	int i;
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
		printf("%d+",sum);
	}
	printf("\nThe sum of first 10 natural numbers is:%d",sum);
}
