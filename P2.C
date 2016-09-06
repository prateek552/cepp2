#include <stdio.h>
#include <conio.h>
void majority(int a[],int n)
{
    int m,i,c;
    c=0;m=a[n/2];
    for(i=0;i<n;i++)
    {
	if(m==a[i])
	c++;

    }
    if(c>n/2)
    printf("%d",m);
    else
    printf("element does not exist");
}
void main()
{
    int a[100];int num,i;
    printf("enter no.");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
	scan("%d",&a[i]);
    }
    majority(a,num);
    getch();
}