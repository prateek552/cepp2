
//jitu check the prgram with all possible errors u can think of
#include "header.h"
#include "islegal.c"
#include "count.c"
int main()
{
    FILE *fp,*fp2;
    fp=freopen("input.txt","r",stdin);int l=count(fp);fclose(fp);
    fp=freopen("input.txt","r",stdin);
    fp2=freopen("output.txt","w",stdout);
    int p,i,j,k,g,m,h,a2=0,c=0;double m1;
    char n[100],a[100],b[100];
    fscanf(fp,"%s\n",n);
    p=atoi(n);
    if((l-1)==p)
    {
    if(islegal(n))
    {
    for(i=0;i<p;i++)
    {
        fscanf(fp,"%s %s",a,b);
        g=atoi(a);
        h=atoi(b);
        if(islegal(a)  && islegal(b) && h>=g)
        {
        if(g==h)
           m=h+1;
        else
            m=h;
        for(j=g;j<m;j++)
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
        m1=(double)c/(h-g+1);
        printf("%lf\n",m1);
        c=0;
        }
        else
            printf("ERROR IN TESTS CASE\n");
    }
    }
    else
        printf("INPUT IS NOT VALID\n");
    }
        else
            printf("INPUT IS NOT VALID\n");
    fclose(fp);
    fclose(fp2);
    return 0;
}
