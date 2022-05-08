#include <stdio.h>
static int g = 5;
void fn(){
static int i = 0;
printf("g = %d\t", g--);
printf("i = %d\n",i++);
}
int main(){
 while(g >= 2)
 fn();
 return 0;
}
