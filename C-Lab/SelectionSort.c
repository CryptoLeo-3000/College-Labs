#include<stdio.h>
void main()
{
    int arr[10],n,min,temp;
    printf("Enter array elements:\n");

    for(int i = 0; i < 10; i++)
        scanf("%d",&arr[i]);

    for(int i = 0; i < 10; i ++)
    {
        min = arr[i];
        n = i;
        for(int j = i+1; j < 10; j ++)
        {
            if(arr[j] <= min)
            {
                min  = arr[j];
                n = j;
            }
        }
        if(n != i)
        {
            temp = arr[i];
            arr[i] = min;
            arr[n] = temp;
        }

        printf("Minimum : %d\n Sort : %d\n",min,i+1);
        for(int k = 0; k < 10; k ++)
            printf("%d\t",arr[k]);
    }

    printf("\n\n\nFinal array : \n");
    for(int i = 0; i < 10; i ++)
        printf("%d\t",arr[i]);
}
