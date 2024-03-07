#include<stdio.h>

int fibo(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}

int main()
{
    int n;
    printf("Enter the no. upto which Fibonacci series needs to be calculated: ");
    scanf("%d", &n);
    printf("The fibonacci series is %d", fibo(n));
    return 0;
}