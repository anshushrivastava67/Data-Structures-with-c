#include <stdio.h>
#include <math.h>
void convert(int n)
{
    int i,d,j,s,a[15];
    printf("Your number is converted in binary:\n");
    for(i=0;n>=1;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    
}

int main()
{
    int s,i,n,a,d=0;
    
    printf("Enter the Decimal positive number:");
    scanf("%d",&n);
    convert(n);
    
  
    return 0;
}



