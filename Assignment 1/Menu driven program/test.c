/*WAF to make a menu driven Program for doing the operations like traverse,insert,search and delete*/
#include <stdio.h>
void traverse(int a[],int n)
{/* A is an array and n is number of elements in the array*/
    int i=0;
    printf("Traversed array:\n");
    while(i<n)
    {
        printf("%d ",a[i]);
        i=i+1;  
        
    }
    printf("\n*Enter 5 for Seeing Menu");
}
void insert(int a[],int n)
{
    int i,pos,value;
    printf("This is your entered array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the position where you want to insert the element:");
    scanf("%d",&pos);
    printf("Enter the value into that position:");
    scanf("%d",&value);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
        
    }
    a[pos-1]= value;
    printf("Final array after inserting the value is\n");
    for(i=0;i<=n;i++)
      {
          printf("%d ",a[i]);
      }
   printf("\n*Enter 5 for seeing Menu");
}

void delete(int a[],int n)
{
    int pos,i;
    printf("\nThis is your entered array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf( "\nDefine the position of the array element where you want to delete:");  
    scanf ("%d", &pos);  
    if (pos>=n+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        for(i=pos-1;i<n-1;i++)  
        {  
            a[i] = a[i+1];
        } 
        printf (" \nAfter deleting the number from the array: \n");  
        for(i=0;i<n-1;i++)  
        {  
            printf ("%d ", a[i]);  
        }  
}
printf("\n*Enter 5 for seeing Menu");
}
void linear_search(int a[],int n)
{/*A is an array n is the number of elemnts in the array and x is the number that you have to search*/
    int Search,flag,i;
    printf("Your entered array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &Search);
    flag = 0; 
    for(i=0; i<n; i++)
    {
        if(a[i] == Search)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("\n%d is found at position %d",Search,i + 1);
    }
    else{
        printf("\n%d is not found in the array",Search);
    }
    printf("\n*Enter 5 for seeing Menu.");
}
void menu(int a[],int n)
{
     printf("Choose any one: \n1. Traversing \n2. Insertion \n3. Deletion \n4. Searching \n5. Menu \n6.Display \nEnter 0 when u have finished\n");    
}
void display(int a[],int n)
{
    int i;
    printf("\n Array is : ");
     for(i=0;i<n;i++)  
        {  
            printf ("%d ", a[i]);  
        }
}
void binary_search(int a[],int n)
{
    int beg=0,end,pos,i,x,mid,flag=0;
    printf("Your entered Array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the number you want to search:");
    scanf("%d",&x);
    end=n-1;
   while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==x)
        {
            pos=mid+1;
            flag=1;
            break;
        }
        else if(x<a[mid])
        {
            end=mid-1;    
        }
        else
        {
            beg=mid+1;
        }
    }
    if(flag==1)
    {
    printf("The position of your elementa is:%d",pos);
    }
    else
    {
    printf("Your number is not in the array.");
    }
} 

int main()
{
    int i,a[100],j,s,n,loc,pos,x,size,TRUE,d;
    /*i is for loop, a[] is for array, j is for choosing option,n is for number of elements in the array,d is for yes or no*/
    printf("Enter the elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&a[i]);
    }
    printf("Choose any one: \n1. Traversing \n2. Insertion \n3. Deletion \n4. Searching \n5. Menu \n6.Display \nEnter 0 when u have finished\n");
    while(i>=0)
    {
        printf("\nEnter the number you want to choose:");
        scanf("%d",&j);
        if(j==1)
        {
            traverse(a,n);    
        }    
        else if(j==2)
        {
            insert(a,n);  
            n++;
        }
        else if(j==3)
        {
            delete(a,n); 
            n--; 
        }
        else if(j==4)
        {
            printf("Is your Array is sorted choose the number like 1 or 2 for yes or no:\n1. Yes \n2. No\n");
            scanf("%d",&d);
            if(d==1)
            {
            binary_search(a,n);
            }
            else if(d==2)
            {
            linear_search(a,n); 
            }
            else
            {
                printf("Your Input is wrong.");
            }
        }
        else if(j==5)
        {
            menu(a,n);    
        }
        else if(j==0)
        {
            printf("Your operation is over.Thank you!\n");
            break;
        }
        else if(j==6)
        {
            display(a,n);
        }
        else
        {
        printf("Invalid input\n");
        continue;
        }
    }
    return(0);
}
