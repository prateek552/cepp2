#include<stdio.h>
#include<conio.h>
#include<math.h>
void sum(int arr[],int n)
{
	int a,b,k,pos1,pos2,pos3;
	for(a=0;a<n;a++)
	{
		for(b=a+1;b<n;b++)
		{
			for(k=0;k<n;k++)
			{
				if(((arr[a]*arr[a])+(arr[b]*arr[b]))==(arr[k]*arr[k]))
				{
					pos1=a;
					pos2=b;
					pos3=k;
				}
			}
		}
	}
	printf("%d%d%d",pos1,pos2,pos3);
}
void main()
{
	int a[100],n,k,i;
	printf("Enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sum(a,n);
	getch();
	}