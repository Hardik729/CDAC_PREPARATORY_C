#include <stdio.h>
#include <string.h>

int main()
{
    char *strings[] = {"apple", "banana", "orange", "apple", "grape", "banana"};
    int n = sizeof(strings) / sizeof(strings[0]);
    printf("Duplicate strings in the array:\n");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(strings[i], strings[j]) == 0)
            {
                printf("%s is duplicated\n", strings[i]);
            }
        }
    }
    return 0;
}
