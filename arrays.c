#include <stdio.h>
int main(){
    int m, n ;
    int a[10][10],b[10][10],c[10][10];
    int i,j;

    printf("enter dimensions of matrix");
    scanf("%d""%d", &m ,&n);
    printf("enter first matrix elements ");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter 2nd matrix elements");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the resultant matrix is:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);

        }
        printf("\n");
        }
        return 0;
    }
    