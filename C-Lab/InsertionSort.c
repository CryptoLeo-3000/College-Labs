#include<stdio.h>
void main()
{
    int arr[10];
    printf("Enter array elements:\n");
    for(int i = 0; i < 10; i++)
        scanf("%d",&arr[i]);

    for(int j = 1; j < 10; j++)
    {
        if(arr[j] < arr[j-1])
        {
            int e = arr[j], m = 0, n = j - 1;
            while(e > arr[m])
                m += 1;

            while(n > m - 1)
            {
                arr[n+1] = arr[n];
                --n;
            }
            arr[m] = e;
        }
        printf("Sort :\n");
        for(int i = 0; i < 10; i++)
            printf("%d\t",arr[i]);

        printf("\n");
    }

    printf("Sorted Array:\n");
    for(int i = 0; i < 10; i++)
        printf("%d\t",arr[i]);
}
