#include<stdio.h>
int main()
{
    int a[3][3]={0,2,0,0,0,5,0,0,0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    int b[3][3]={0,0,1,0,0,0,2,0,0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    int res[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            res[i][j]=a[i][j]+b[i][j];
            printf("%d ",res[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    int sp[4][3]; int k=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(res[i][j]!=0)
            {
                sp[k][0]=i;
                sp[k][1]=j;
                sp[k][2]=res[i][j];
                k++;
            }

    }
}
for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",sp[i][j]);
        }
    printf("\n");
    }
}