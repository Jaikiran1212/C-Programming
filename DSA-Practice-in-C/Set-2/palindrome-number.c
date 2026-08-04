#include <stdio.h>
#include <string.h>

int isPalindrome(int x)
{
    // Negative numbers are never palindromes
    if (x < 0)
        return 0;

    char str[20];

    sprintf(str, "%d", x);

    int n = strlen(str);

    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int x;

    printf("Enter the number: ");
    scanf("%d", &x);

    if (isPalindrome(x))
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
