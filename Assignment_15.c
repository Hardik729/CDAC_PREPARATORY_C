#include <stdio.h>
#include <ctype.h>
#include<string.h>

void countAlphabets(const char *str)
{
    int count[26] = {0};
    while (*str) {
        if (isalpha(*str))
        {
            char lowercase = tolower(*str);
            count[lowercase - 'a']++;
        }
        str++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0) {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }
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
    countAlphabets(inputString);
    return 0;
}
