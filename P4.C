#include<stdio.h>
#include<conio.h>
void sum(int arr[],int n, int k)
{
	int a,b,c,pos1,pos2,pos3;
	for(a=0;a<n;a++)
	{
		for(b=a+1;b<n;b++)
		{
			for(k=0;k<n;k++)
			{
				if((pow(arr[a],2)+pow(arr[b]+arr[c])==k)
				{
					pos1=a;
					pos2=b;
					pos3=c;
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
	scanf("%d",&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sum(a,n,k);
	getch();
}