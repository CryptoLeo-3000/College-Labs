#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char par[20],exp[20],post[20];
    int pr-=1, l, p -=1;

    l = strlen(exp);

    for(int i=0; i<l; i++)
    {
        if(isalpha(exp[i]) != 0)
        {
            p += 1;
            post[p] = exp[i];
        }
        else
        {
            pr += 1;
            par[pr] == exp[i];

        }
    }
}
