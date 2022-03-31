#include <stdio.h>
#define rows 100
#define columns 100
void uptriangle(int a[rows][columns],int r,int c){
    int i,j;
     for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
            {
                if (i >= j)
                {
                    printf("%d ", a[i][j]);
                }
                else
                {
                    printf("\t");
                }
            }
 
        }
}

void downtriangle(int a[rows][columns],int r,int c){
    int i,j;
     for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
            {
                if (j>=i)
                {
                    printf("%d  ", a[i][j]);
                }
            }
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
    printf("\nUpper Triangle of a 2D array:\n");
    uptriangle(a,r,c);
    printf("\nLower tiangle of a 2D array:\n");
    downtriangle(a,r,c);
}

