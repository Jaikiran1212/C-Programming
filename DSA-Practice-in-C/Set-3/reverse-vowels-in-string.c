#include <stdio.h>
#include <string.h>

int isVowel(char ch)
{
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
}

void reverseVowels(char s[])
{
    int left = 0;
    int right = strlen(s) - 1;

    while(left < right)
    {
        while(left < right && !isVowel(s[left]))
            left++;

        while(left < right && !isVowel(s[right]))
            right--;

        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }

    printf("Output : %s\n", s);
}

int main()
{
    char str[1000];

    printf("Enter String : ");
    scanf("%s", str);

    reverseVowels(str);

    return 0;
}
