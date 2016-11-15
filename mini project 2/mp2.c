#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp,*fp2;
    fp=freopen("input.txt","r",stdin);
    fp2=freopen("output.txt","w",stdout);
    int n,i,j,k,a,m,b,a2=0,c=0;double m1;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a==b)
           m=b+1;
        else
            m=b;
        for(j=a;j<m;j++)
            {

                   for(k=1;k<=j;k++)
                   {
                        if(j%k==0)
                        a2++;
                    }
                    if(a2==2)
                    c++;
                    a2=0;
            }
        m1=(double)c/(b-a+1);
        printf("%f\n",m1);
        c=0;
    }
    fclose(fp);
    fclose(fp2);
    return 0;
}
