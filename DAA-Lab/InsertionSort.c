// DAA Insertion sort algorithm (without swapping) in C
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

int *arr, n;

void InsertionSort()
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = key;
    }
}

void main()
{
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        srand(time(0));
        printf("Memory successfully allocated using malloc.\n");
        for (int i = 0; i < n; ++i)
            arr[i] = rand();
 
        printf("The elements of the array are:\n");
        for (int i = 0; i < n; ++i)
            printf("%d, ", arr[i]);
        printf("\n");
    }
    
    InsertionSort();
    
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        
    getch();
}