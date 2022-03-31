/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define rows 100
#define columns 100
void transpose(int a[rows][columns],int r,int c){
    int i,j,temp;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int a[rows][columns],r,c,i,j,b[rows][columns];
    printf("How many Rows are there in your array:");
    scanf("%d",&r);
    printf("How many columns are there in your array:");
    scanf("%d",&c);
    printf("Enter the elments of the 1st array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the elements:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nTranspose of a matrix is:\n");
    transpose(a,r,c);
}    

