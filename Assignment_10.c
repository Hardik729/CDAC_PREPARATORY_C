#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

int compareStrings(const void *a, const void *b) 
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int main()
{
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    printf("Enter at most 10 names of students (press Enter after each name):\n");
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        if (fgets(nameOfStudents[i], sizeof(nameOfStudents[i]), stdin) == NULL)
        {
            printf("Error reading input.\n");
            return 1;
        }
        // Remove newline character if present
        size_t len = strlen(nameOfStudents[i]);
        if (len > 0 && nameOfStudents[i][len - 1] == '\n')
        {
            nameOfStudents[i][len - 1] = '\0';
        }
    }
    // Cast array of strings to array of pointers to strings for qsort
    char *sortedNames[MAX_STUDENTS];
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        sortedNames[i] = nameOfStudents[i];
    }
    qsort(sortedNames, MAX_STUDENTS, sizeof(sortedNames[0]), compareStrings);
    printf("\nSorted names of students:\n");
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        printf("%s\n", sortedNames[i]);
    }
    return 0;
}
