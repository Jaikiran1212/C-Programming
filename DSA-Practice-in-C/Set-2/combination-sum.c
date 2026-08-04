#include <stdio.h>

void combination_sum(int arr[], int n, int target, int index, int temp[], int size)
{
    // Target achieved
    if (target == 0)
    {
        printf("[");

        for (int i = 0; i < size; i++)
        {
            printf("%d", temp[i]);

            if (i != size - 1)
                printf(",");
        }

        printf("]\n");
        return;
    }

    // Base case
    if (target < 0 || index >= n)
    {
        return;
    }

    // Special handling for zero
    if (arr[index] == 0)
    {
        // Include this zero only once
        temp[size] = 0;
        combination_sum(arr, n, target, index + 1, temp, size + 1);

        // Skip this zero
        combination_sum(arr, n, target, index + 1, temp, size);

        return;
    }

    // Include current element
    temp[size] = arr[index];
    combination_sum(arr, n, target - arr[index], index, temp, size + 1);

    // Exclude current element
    combination_sum(arr, n, target, index + 1, temp, size);
}

int main()
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;

    printf("Enter the target sum: ");
    scanf("%d", &target);

    int temp[100];

    printf("\nPossible Combinations:\n");

    combination_sum(arr, n, target, 0, temp, 0);

    return 0;
}
