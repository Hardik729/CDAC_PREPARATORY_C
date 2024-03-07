#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no. for which its table needs to be displayed: ");
    scanf("%d", &n);
    printf("The table of the entered no. %d is: \n",n);
    for(int i=1; i<=10; i++)
    {
        printf("%dx%d=%d",n,i,(n*i));
        printf("\n");
    }
    return 0;
}