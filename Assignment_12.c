#include <stdio.h>
#include <string.h>

void reverseString(char *str)
{
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
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
    reverseString(inputString);
    printf("Reversed string: %s\n", inputString);
    return 0;
}
