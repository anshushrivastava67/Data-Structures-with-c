#include<stdio.h>
#include <conio.h>
int greater(int a[100],int n)
{
    int i,count=0,sum=0;
    float avg;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        avg=(float)sum/n;    
    }
     for(i=0;i<n;i++)
    {
        if(a[i]>avg)
        {
            count=count+1;    
        }    
    }
 
    printf("Average of the array:%2.1f\n",avg);
    printf("The count of number which are greater than average of an array:%d",count);
} 
 
int main()
{
    int a[1000],i,n,count=0;
    float sum=0,avg;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
   
    for(i=0; i<n; i++)
    {
        printf("Enter elements in array : ");
        scanf("%d",&a[i]);
        
    }
    greater(a,n);
    return 0;
}
