#include<stdio.h>

int main()
{
	int i,j,n,t;
	printf("Enter number ");
	scanf("%d",&n);
	printf("Enter elements")
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 }
	 printf("Before swapping");
	 for (i=0;i<n;i++)
	 {
	 	printf("%d" \t,a[i]);
	 }
	 for (i=0;i<n-1;i++)
	 {
	 	for (j=i+1;j<n;j++)
	 	{
	 		if (a[i]>a[j])
	 		{
	 			t=a[i];
	 			a[i]=a[j];
	 			a[j]=t;
			 }
		 }
	 }
}
