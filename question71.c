//Q71: Read and print a matrix.
#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter the value of rows\n");
    scanf("%d",&n);
    printf("enter the value of column\n");
    scanf("%d",&m);
    int arry[n][m];
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=m ; j++)
        {
            printf("enter the value\n");
            scanf("%d",&arry[i][j]);
        }
    }
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=m ; j++)
        {
            printf("%d",arry[i][j]);
        }
        printf("\n");
    }
    return 0;
}