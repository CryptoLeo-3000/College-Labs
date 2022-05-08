// DAA Merge sort algorithm (Divide and Conquer) in C
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

int *arr, n;

void Merge(int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        MergeSort(l, m);
        MergeSort(m + 1, r);
 
        Merge(l, m, r);
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
    
    MergeSort(0, n-1);
    
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        
    getch();
}