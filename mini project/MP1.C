#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp,*fp2;
    fp=freopen("input.txt","r",stdin);
    fp2=freopen("output.txt","w",stdout);
    int n,i,j,a,b,a2,c=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        for(j=0;j<a;j++)
            {
                    scanf("%d",&a2);
                    if(a2<=0)
                    c++;
            }
        if(c>=b)
         printf("ON\n");
        else
        printf("OFF\n");
        c=0;

    }
    fclose(fp);
    fclose(fp2);

    return 0;
}
