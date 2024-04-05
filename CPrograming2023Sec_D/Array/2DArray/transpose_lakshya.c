#include<stdio.h>
void transpose(int p[][3],int i,int j);
int main()
{
    int a[3][3],i,j;
    printf("enter the element:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    transpose(a,3,3);
}
void transpose(int p[][3],int i,int j)
{
    int t[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            t[i][j]=p[j][i];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
}