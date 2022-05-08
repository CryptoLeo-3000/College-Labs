#include<stdio.h>
#include<string.h>
/*
int fun(int x)
{
static int i = 1;
if (x >= 5)
	return x;
x = x+i;
i++;
return fun(x);
}
void main()
{
    fun(1);
}
*/
/*
char ptr[10];
char *str = "rehana";
int k = strlen(str);
int i;
for(i = 0; i<k; i++)
    ptr[i] = str[k-i];
printf("%s", ptr);
*/
int main()
{
    int x=10, y=20;
    swap(&x, &y);
    printf("x=%d, y=%d", x, y);
    return 0;
}
void swap(int *xp, int *yp)
 {
     int temp = *xp;
     *xp = *yp;
     *yp = temp;
 }
