#include<stdio.h>
#include<stdbool.h>
//{
    // int arr[5]={1,2,3,4,5};
    // printf("%d\n",arr[2]);
    // arr[0]=20;
    // printf("%d",arr[0]);
    // float brr[3]={1.2, 3.4, 5.7};
    // for(int i=0;i<=3;i++)
    // {
    //     printf("%f",brr[i]);//printing of whole array.
    // }
    //char crr[3]={'a','s','Y'};
    //printf("%c",crr[0]);
    // int arr[4];
    // for(int i=0;i<=3;i++)
    // {
    //     printf("enter first element:%d\n",i+1);
    //     scanf("%d", &arr[i]);
    // }
    // printf("%d ", arr[0]);
    // int arr[4];
    // for(int i=0;i<=3;i++)
    // {
    //     printf("enter element:%d", i+1);
    //     scanf("%d",&arr[i]);
    // }
    // for(int j=3;j>=0;j--)//reversing an array
    // {
    //     printf("%d ",arr[j]);
    // }
    // int marks[10];//printing marks of students
    // for(int i=0;i<=9;i++)
    // {
    //     printf("enter marks of student:%d\n",i+1);
    //     scanf("%d", &marks[i]);
    // }
    // for(int k=0;k<=9;k++) printf("%d ", marks[k]);
    // for(int j=0;j<=9;j++)
    // {
    //     if(marks[j]<=35)
    //     {
    //         printf("%d ", j);
    //     }
    // }
    // int arr[3]={1,2,3};
    // printf("%p", &arr[0]);//printing address of zeroth element. %p is used for printing address of element.
    // int arr[5]={23,45,4,3,6};
    // int prod=1;
    // for(int i=0;i<=4;i++)
    // {
    //     prod=prod*arr[i];//product of elements.
    // printf("%d", prod);//printinf sum of elements
    // int n;
    // printf("enter size of elements");
    // scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<=n-1;i++)//taking elements less than initial value
    // {
    //     printf("enter element:%d\n", i+1);
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<=n-1;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // int arr[4]={-2,-5,-90,-110};
    // int min=arr[0];
    // for(int i=0;i<=3;i++)
    // {
    //     if(min>arr[i]){
    //         min=arr[i];
    //     }

    // }
    // printf("%d",min);//printing maximum and minimum element.
    // int arr[6];
    // for(int i=0;i<=5;i++)
    // {
    //     printf("enter elements: %d\n",i+1);
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<=5;i++)
    // {
    //     if(i%2==0)
    //     {
    //         arr[i]=arr[i]*2;
    //     }
    //     else
    //     {
    //         arr[i]+=10;
    //     }
    // }
    // for(int j=0;j<=5;j++)
    // {
    //     printf("%d ",arr[j]);}
    //reverse 1d array
    // int arr[5];
    // for(int i=0;i<5;i++)
    // {
    //     printf("enter element: %d ",i+1);
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");
    // for(int i=0;i<5;i++)
    // {
    //     int j=0;
    //     int k=5-1;
    //     while(j<k)
    //     {
    //         int temp=arr[j];
    //     arr[j]=arr[k];
    //     arr[k]=temp;
    //     j++;k--;}
    // }
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",arr[i]);
    // }

//to rotate array by k steps
// int reverse(int arr[], int si, int ei)
// {

//     for(int i=si,j=ei;i<j;i++,j--)
//     {
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }
// }
// int main()
// {
//     int arr[6]={1,2,3,4,5,6};
//     int n=6;
//     int k=5;
//     k=k%n;
//     reverse(arr,0,n-1);
//     reverse(arr,0,k-1);
//     reverse(arr,k,n-1);
//     for(int i=0;i<6;i++)
//     {
//         printf("%d ",arr[i]);
//     }

// }
int main()
{
    //linear search
    // int arr[5]={10,10,3,4,5};
    // int x=10;
    // for(int i=0;i<5;i++)
    // {
    //     if(arr[i]==x)
    //     {
    //         printf("element found: %d and index is: %d",x,i);
    //         break;
    //     }
    // }

//to find duplicate elements and count them.
// int arr[8]={1,2,3,3,4,4,6,7};
// int count=0;
// for(int i=0;i<7;i++)
// {
//     for(int j=i+1;j<7;j++)
//     {
//         if(arr[i]==arr[j])
//         {
//             count++;
//             printf("element found:%d \n",arr[i]);
//         }
//     }
    
// }
// printf("%d ",count);

//to print unique elements
// int arr[7]={1,1,2,2,2,4,5};
// for(int i=0;i<7;i++)
// {
//     bool flag = false;
//     for(int j=i+1;j<7;j++)
//     {
//         if(arr[i]==arr[j])
//         {
//             flag=true;
//         }
//     }
//     if(flag==false)
//     {
//         printf("%d",arr[i]);
//         break;
//     }

// }
}

