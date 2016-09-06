#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100];int n;int i;int j=0;int b[100];
	printf("Enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
	}
		for(i=0;i<n;i++)
	{
		if((a[i]%2)!=0)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(i=0;i<n;i++)
	{
	     printf("%d",b[i]);
	}
	getch();
}