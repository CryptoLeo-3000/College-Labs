#include<stdio.h>
#include<math.h>
void main()
{
    int x,n;
    float val = 0.0;
    int j = 0;
    printf("Enter range of series:\n");
    scanf("%d",&n);
    printf("Enter value of x for series:\n");
    scanf("%d",&x);

    for(int i = 0; i <= n; i+=2)
    {
        int fact = 1;
        if(i == 0)
            val += 1.0;
        else
        {
            for(int k = 1; k <= i; k++)
                fact *= k;
            if(j % 2 == 0)
            {
                val -= (pow(x, i)/fact);
                printf("%f\n",val);
                ++j;
            }
            else
            {
                val += (pow(x,i)/fact);
                printf("%f\n",val);
                ++j;
            }
        }
    }
    printf("Final result of series = %f\n",val);
}
