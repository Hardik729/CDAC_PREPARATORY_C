#include<stdio.h>

int main()
{
    int n,m,p,q;
    printf("Enter the no. of rows and columns for the matrix1: ");
    scanf("%d %d", &n,&m);
    printf("Enter the no. of rows and columns of the matrix2: ");
    scanf("%d %d", &p,&q);
    if(m != p)
    {
        printf("\nMatrix multiplication not possible with the given dimensions");
        return 1;
    }

    int matrix1[n][m], matrix2[p][q], result[n][q];
    printf("Enter the elements of the first matrix:");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d ", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:");
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            scanf("%d ", &matrix2[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<q; j++)
        {
            result[i][j] = 0;
            for(int k=0; k<m; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Resultant matrix after multplication:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<q; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}