//bubble sort
#include<stdio.h>
int main()
{
	int a[20],n,i,j,temp;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter elements:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	
	{
		for(i=0;i<n-1-j;i++)
		{
			if (a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}	
			 }
			  }
	printf("Elements are sorted!!:\n");		
for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
return (0);
}
