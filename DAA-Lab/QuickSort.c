// DAA Quick sort algorithm in C
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

int *arr, n;

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void QuickSort(int low, int high)
{
    int i, j, pivot, temp;
    if(low < high)
    {
        pivot=low;
        i=low;
        j=high;
        
        while(i<j)
        {
            while(arr[i]<=arr[pivot]&&i<high)
                i++;
            
            while(arr[j]>arr[pivot])
                j--;
         
            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

        swap(&arr[pivot], &arr[j]);

        QuickSort(low, j-1);
        QuickSort(j+1, high);
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
    
    QuickSort(0, n - 1);
    
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        
    getch();
}
