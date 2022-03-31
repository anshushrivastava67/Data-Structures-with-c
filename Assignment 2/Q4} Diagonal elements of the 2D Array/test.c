/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define rows 100
#define columns 100
void dig(int a[rows][columns],int r,int c){
    int i,j;
    if(r==c)
    {
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
            }
           
        }
    } 
    }
    else
    {
        printf("Matrix is not a square matrix.");
    }
}
int main(){
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
    printf("Diagonal Elements of 2D array:\n");
    dig(a,r,c);
}
