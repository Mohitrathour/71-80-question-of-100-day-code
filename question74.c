//Q74: Find the transpose of a matrix.
#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter the value of rows\n");
    scanf("%d",&n);
    printf("enter the value of column\n");
    scanf("%d",&m);
    int arry[100][100],transpose[100][100];
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
            transpose[j][i]=arry[i][j];
        }
    }
    for(i=1 ; i<=m ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}