#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int k=0;k<5;k++)
    {
        printf("%d ",arr[k]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {   int i=0;
        int j=4;
        while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
for(int k=0;k<5;k++)
    {
        printf("%d ",arr[k]);
    }
    printf("\n");
}