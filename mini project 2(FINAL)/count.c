#include "header.h"
int count(FILE *fp)
{
    char c;int co=0;
    c=getc(fp);
    for(;c!=EOF;c=getc(fp))
    {
        if(c=='\n')
        co++;
    }
    return co;
}
