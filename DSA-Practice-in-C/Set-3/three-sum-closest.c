#include <stdio.h>
#include <stdlib.h>

void threeSumClosest(int arr[], int n, int target)
{
    int closestSum = arr[0] + arr[1] + arr[2];
    int minDiff = abs(target - closestSum);

    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int sum = arr[i]+arr[j]+arr[k];
                int diff = abs(target-sum);

                if(diff < minDiff)
                {
                    minDiff = diff;
                    closestSum = sum;
                }
            }
        }
    }

    printf("Closest Sum = %d\n", closestSum);
}

int main()
{
    int n;

    printf("Enter Size : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter Elements:\n");

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int target;

    printf("Enter Target : ");
    scanf("%d",&target);

    threeSumClosest(arr,n,target);

    return 0;
}
