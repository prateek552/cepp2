#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n,min,j,diff,pos1,pos2;
	int a[100];
	printf("Enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=abs(a[1]-a[2]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			diff=abs(a[i]-a[j]);
			if(diff>min && a[j]>a[i])
			{
				min=diff;
				pos1=i;
				pos2=j;
			}
		}
	}
	printf("%d%d",a[pos1],a[pos2]);
	getch();
}
