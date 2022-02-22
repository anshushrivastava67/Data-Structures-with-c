#include<stdio.h>
#include<math.h>
int prime(int a[],int n)
{
    int j,flag,i;
    printf("Prime numbers in the array are:");
    for(i=0;i<n;i++)
    {
        flag=1;
        for(j=2;j<a[i]/2+1;j++)
        {
            if(a[i]%j==0)
            {
                flag=0;
                break;
            }    
        }
        if(flag==1)
        {
            printf("%d ",a[i]);
        }
        
    }    
}
int main()
{
    int n,i,a[100],j,flag;
    printf("Enter the size of your array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);
    }
    prime(a,n);
    
}
