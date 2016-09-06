#include<stdio.h>
#include <conio.h>
int main()
{
   
    int i,j,n,min;int a[100];int sum,pos,pos1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0]+a[n-1];pos=0;pos1=(n-1);
    for(i=0;i<n;i++)
    {
	for(j=i+1;j<n;j++)
	{
	    sum=abs(a[i]+a[j]);
	    if(sum<min)
	    {
                min=sum;
                pos=i;
                pos1=j;
                
	    }
        }
    }
    printf("%d%d",pos,pos1);
    getch();
    return(0);
}
