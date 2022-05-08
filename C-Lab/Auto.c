#include <stdio.h>
int sum(int n1, int n2){
 auto int s; //declaration of auto(local) variable
 s = n1+n2;
 return s;
}
int main(){
 int i = 2, j = 3, k;
k = sum(i, j);
 printf("sum is : %d\n", k);
 return 0;
}
