#include<stdio.h>
int main()
{
    int a[3][3]={0,0,0,1,0,5,0,6,0};
    int z=0,nz=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==0)
            {
                z++;
            }
            else{
                nz++;
            }
        }

}
printf("%d %d\n",z,nz);
if(nz>z)
{
    printf("not a sparse matrix");
}
else
{
    int s[3][3];//sparse matrix row major representation.
    int k=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]!=0)
                {s[k][0]=i;
                s[k][1]=j;
                s[k][2]=a[i][j];
                k++;}
        }
    }
    
for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", s[i][j]);
        }
    printf("\n");
    }
}
}