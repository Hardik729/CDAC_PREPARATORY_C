#include<stdio.h>

int sum(int *arr)
{
    int total=0;
    for(int i=0; i<5; i++)
    {
        total = total + arr[i];
    }
    printf("Total marks = %d\n", total);
    return total;
}

const char *grade(int a)
{
    if(a>=90)
    {
        return "Ex";
    }
    else if(a>80 && a<90)
    {
        return "A";
    }
    else if(a>70 && a<80)
    {
        return "B";
    }
    else if(a>60 && a<70)
    {
        return "C";
    }
    else
    {
        return "F";
    }
}

int main()
{
    int a[5], total=0;
    printf("Enter the marks of the 5 subjects:\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    total = sum(a);
    printf("Grade assigned to the student is %s",grade(total));
    return 0;
}