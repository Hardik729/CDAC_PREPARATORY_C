#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str)
{
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    size_t len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n')
    {
        inputString[len - 1] = '\0';
    }
    if (isPalindrome(inputString))
    {
        printf("%s is a palindrome.\n", inputString);
    } 
    else
    {
        printf("%s is not a palindrome.\n", inputString);
    }
    return 0;
}
