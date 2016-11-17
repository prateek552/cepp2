#include "header.h"
#include<string.h>
int islegal(char n[])
{
    int num;int i=0;
    num=strlen(n);
    while(num>0)
    {
        if(!isdigit(n[i]))
        {
            return 0;
        }
        num--;
        i++;
    }
    return 1;

}
