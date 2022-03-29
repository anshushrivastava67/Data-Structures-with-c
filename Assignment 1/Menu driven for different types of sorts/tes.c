/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void selsort(int a[],int n){
    int min,i,k,pos;
    for(k=0;k<=n-1;k++)
    {
        min=a[k];
        pos=k;
        for(i=k+1;i<=n-1;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
                pos=i;
            }
        }
        a[pos]=a[k];
        a[k]=min;
        printf("%d ",a[k]);
    }

}

void bubsort(int a[],int n){
    int i,j,temp;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
           
        }
        printf("%d ",a[i]);
    }
}

void insort(int a[],int n){
    int i,k,temp;
    for(k=1;k<=n;k++)
    {
        temp=a[k];
        i=k-1;
        while(i>=0 && temp<a[i])
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=temp;
    }
    for(i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
}
void menu(){
    printf("Different Types of sorting:\n1.Selection Sorting \n2.Bubble Sorting \n3,Insertion Sorting \n4.Menu \n0.Exit");
}

int main()
{
    int a[1000],i,n,ch;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("Enter the number in the array:");
        scanf("%d",&a[i]);
    }
    printf("Different Types of sorting:\n1.Selection Sorting \n2.Bubble Sorting \n3,Insertion Sorting \n4.Menu \n0.Exit");
    while(i>=0)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        if(ch==1)
        {
            selsort(a,n);
        }
        else if(ch==2)
        {
            bubsort(a,n);
        }
        else if(ch==3)
        {
            insort(a,n);
        }
        else if(ch==4)
        {
            menu();
        }
        else if(ch==0)
        {
            printf("Your sorting is Over!");
            break;
        }
    }
    return 0;
}

