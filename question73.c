//Q73: Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>
int main()
{
    int n,m,i,j,s=0;
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
            s+=arry[i][j];
        }
        printf("sum of each row is\n");
        printf("%d",s);
        s=0;
        printf("\n");
    }
    return 0;
}