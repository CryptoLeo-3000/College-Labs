#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int x, y;

void swap()
{
    x = x + y;
    y = x - y;
    x = x - y;
}

int main()
{
    printf("Enter value 1: ");
    scanf("%d", &x);

    printf("Enter value 2: ");
    scanf("%d", &y);

    swap();

	printf("After Swapping: x = %d, y = %d", x, y);

	return 0;
}