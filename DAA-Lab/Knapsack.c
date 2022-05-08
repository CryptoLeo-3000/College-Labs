#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int W, *value, *weight, n;

void InsertionSort()
{
    for (int i = 1; i < n; i++)
    {
        int key_value = value[i];
        int key_weight = weight[i];
        int j = i - 1;

        while (j >= 0 && value[j]/(float)weight[j] < key_value/(float)key_weight)
        {
            value[j + 1] = value[j];
            weight[j + 1] = weight[j];
            j = j - 1;
        }

        value[j + 1] = key_value;
        weight[j + 1] = key_weight;
    }

    // printf("After sorting:\n");
    // for(int i = 0; i<n; i++)
    //     printf("Value: %d \tWeight: %d\n", value[i], weight[i]);
}

float FractionalKnapsack()
{
	InsertionSort();

    int current_weight = 0;
	float final = 0.0;

	for (int i = 0; i < n; i++)
    {
		if (current_weight + weight[i] <= W)
        {
			current_weight += weight[i];
			final += value[i];
		}
        else
        {
            final += value[i] * ((float)(W - current_weight) / (float)weight[i]);
            //printf("%d", final);
			break;
        }
	}

	return final;
}

int main()
{
    int val;
    value = (int*)malloc(n * sizeof(int));
    weight = (int*)malloc(n * sizeof(int));

    printf("Enter no. of values: ");
    scanf("%d", &n);

    printf("Enter Knapsack weight: ");
    scanf("%d", &W);

    for(int i = 0; i<n; i++)
    {
        printf("Enter Knapsack value %d: ", i+1);
        scanf("%d", &val);
        value[i] = val;

        printf("Enter Knapsack weight for value %d: ", value[i]);
        scanf("%d", &val);
        weight[i] = val;
    }

	printf("Maximum value we can obtain = %.1f", FractionalKnapsack());

	return 0;
}