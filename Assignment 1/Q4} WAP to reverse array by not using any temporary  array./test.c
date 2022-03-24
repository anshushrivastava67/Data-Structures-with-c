#include<stdio.h>
int reverse(int a[],int n)
{
    int i;
    printf("\nReversed array is:\n");
    for(i=n-1;i>=0;i--)
    {
    printf("%d ",a[i]);
    }    
}
int main()
{

    int n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elements in the array:");
        scanf("%d",&a[i]);
    }
    printf("Your entered array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    reverse(a,n);
    return 0;
}


