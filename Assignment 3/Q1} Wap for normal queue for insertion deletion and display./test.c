#include <stdio.h>
#include <stdlib.h>
 
#define MAX 50
 
void insert();
void delete();
void display();
void menu();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    printf("Enter your Choice:\n1.Insertion in the queue \n2.Deletion from the queue \n3.Display \n4.Menu \n0.Exit");
        
    while (1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            
            case 2:
            delete();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            menu();
            break;
            
            case 0:
            break;
            exit(1);
            
            default:
            printf("Invalid choice! \n");
        } 
    } 
} 
 
void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
       
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
    printf("Press 4 for seeing Menu!");
} 
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
    printf("Press 4 for seeing Menu!");
} 
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
    printf("Press 4 for seeing Menu!");
}

void menu(){
    printf("Enter your Choice:\n1.Insertion in the queue \n2.Deletion from the queue \n3.Display \n4.Menu \n0.Exit");
}
