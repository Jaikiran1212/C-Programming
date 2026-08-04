void Medium(char s[])
{
    int len = strlen(s);

    int maxLength = 1;
    int startIndex = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = len - 1; j >= i; j--)
        {
            int currentLength = j - i + 1;

            // No need to check smaller substrings
            if (currentLength <= maxLength)
            {
                break;
            }

            int left = i;
            int right = j;
            int palindrome = 1;

            while (left < right)
            {
                if (s[left] != s[right])
                {
                    palindrome = 0;
                    break;
                }

                left++;
                right--;
            }

            if (palindrome)
            {
                maxLength = currentLength;
                startIndex = i;
                break;
            }
        }
    }

    printf("\nLongest Palindrome Substring : ");

    for (int i = startIndex; i < startIndex + maxLength; i++)
    {
        printf("%c", s[i]);
    }

    printf("\nLength = %d\n", maxLength);
}
