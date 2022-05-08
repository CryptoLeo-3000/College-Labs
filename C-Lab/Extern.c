#include <stdio.h>
int g;
void print(){
 g = 10;
 printf("g = %d\n", g);
}
int main(){
 g = 7;
 printf("g = %d\n", g);
 print();
 return 0;
}
