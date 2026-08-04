#include <stdio.h>
#include <string.h>

void removedup(int arr[],int n){
    if (n == 0){
        printf("Array is empty !!");
        return;
    }

    int k = 1;
    for(int i = 1; i < n ; i++){
        if(arr[i] != arr[k-1]){
            arr[k] = arr[i];
            k++;
        }
    }
    printf("Number of unique elements = %d\n",k);
    printf("Array after removing duplicates : \n");

    for(int i = 0 ; i < k;i++){
        printf("%d ",arr[i]);
    }
}

int main(){

    int n;

    printf("Enter size : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the sorted array elements : \n");

    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    removedup(arr,n);
    return 0;
}
