#include<stdio.h>

int factorial(int a)
{
    if(a == 0)
    {
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }
}

int main()
{
    int n;
    printf("Enter the no. for factorial calculation: ");
    scanf("%d", &n);
    printf("Factorial for the given no. %d is %d", n, factorial(n));
    return 0;
}