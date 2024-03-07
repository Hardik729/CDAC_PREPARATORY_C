#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    char *inputstr;
    int maxLength, uCount = 0, lCount = 0, dCount = 0, oCount = 0;
    printf("Enter the maximum length of the input string: ");
    scanf("%d", &maxLength);
    inputstr = (char*)malloc((maxLength + 1) * sizeof(char));
    if (inputstr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the input string: ");
    scanf("%s", inputstr);
    for(int i = 0; inputstr[i] != '\0'; i++)
    {
        if (isupper(inputstr[i]))
        {
            uCount++;
        }
        else if (islower(inputstr[i]))
        {
            lCount++;
        }
        else if (isdigit(inputstr[i]))
        {
            dCount++;
        }
        else
        {
            oCount++;
        }
    }

    printf("Uppercase characters: %d\n", uCount);
    printf("Lowercase characters: %d\n", lCount);
    printf("Number of digits: %d\n", dCount);
    printf("Other characters: %d\n", oCount);
    free(inputstr);
    return 0;
}
