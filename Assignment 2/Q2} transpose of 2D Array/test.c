/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define rows 100
#define columns 100
void sum(int a[rows][columns],int r,int c,int b[rows][columns]){
    int i,j,sum[100][100];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=b[i][j]+a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}

void subtract(int a[rows][columns],int r,int c,int b[rows][columns]){
    int i,j,subtract[100][100];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            subtract[i][j]=a[i][j]-b[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",subtract[i][j]);
        }
        printf("\n");
    }
}

void multiply(int a[rows][columns],int r,int c,int b[rows][columns]){
     int i,j,mul[100][100],k;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<r*c;k++){
            mul[i][j]=mul[i][j]+a[i][k]*b[k][j];}
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mul[i][j]);
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
    printf("Enter the Elements of the 2nd Matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the elements:");
            scanf("%d",&b[i][j]);
        }
    }
    printf("Addition of 2D array: ");
    sum(a,r,c,b);
    printf("\nSubtration of 2D array: ");
    subtract(a,r,c,b);
    printf("\nMultiplication of 2D array: ");
    multiply(a,r,c,b);
    
    return 0;
}


