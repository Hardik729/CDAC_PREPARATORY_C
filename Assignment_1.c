#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int currentnum, maxnum = 0;
    printf("No. of arguments = %d\n", argc);
    printf("Name of the program is: %s\n",argv[0]);
    for(int i=1; i<=argc; i++)
    {
        currentnum = atoi(argv[i]);
        if(currentnum > maxnum)
        {
            maxnum = currentnum;
        }
    }
    printf("The maximum no. is %d", maxnum);
    return 0;
}