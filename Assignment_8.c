#include<stdio.h>
#include<stdlib.h>

struct student
{
    char studentName[50];
    char rollNo[20];
    int totalMarks;
} s1;

void display(struct student s)
{
    printf("Name of the student: %s", s.studentName);
    printf("%s's roll no. is %s", s.studentName, s.rollNo);
    printf("Total marks obtained by %s are %d", s.studentName, s.totalMarks);
}

int main()
{
    printf("Enter the name of the student: ");
    fgets(s1.studentName,sizeof(s1.studentName),stdin);
    
    printf("Enter the roll no. of the student: ");
    fgets(s1.rollNo,sizeof(s1.rollNo),stdin);
    
    printf("Enter the total marks obtained by the student: ");
    scanf("%d", &s1.totalMarks);
    
    display(s1);

    return 0;
}
