#include <stdio.h>
#include <math.h>

int main()
{
    int s,i,n,a[100],d=0;
    printf("Enter the Decimal positive number:");
    scanf("%d",&n);
    for(i=0;n!='\0';i++)
    {
        s=n%2;
        d=s*pow(10,i)+d;
        n=n/2;
        printf("%d",d);
    }

    return 0;
}


