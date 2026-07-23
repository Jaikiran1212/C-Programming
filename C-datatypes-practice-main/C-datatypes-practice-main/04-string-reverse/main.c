#include <stdio.h>
#include <string.h>

int main(){

    char arr[100];
    printf("Enter the word : ");
    fgets(arr, sizeof(arr), stdin);

    printf("The characters are : ",arr);


    for (int i = strlen(arr)-1 ; i >= 0 ; i--){
        printf("%c",arr[i]);
    }

    return 0;
}