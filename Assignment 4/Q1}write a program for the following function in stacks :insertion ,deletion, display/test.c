#include <stdio.h>
#include <stdlib.h>
 
#define MAX 5 
 
int top=-1,stack[MAX];
void push();
void pop();
void display();
void menu();
 
void main()
{
int ch;
printf("Stack menu:\n1.Push \n2.Pop \n3.Display \n4.Menu \n0.Exit");
while(1) 
{

printf("\n\nEnter your choice(1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: menu();
break;
case 0: exit(1);
default: printf("\nInvalid Choice!");
}
}
}
 
void push()
{
int val;
if(top==MAX-1)
{
printf("\nStack is full!!");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
 
void pop()
{
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
}
}
 
void display()
{
int i;
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}

void menu(){
    printf("Stack menu:\n1.Push \n2.Pop \n3.Display \n4.Menu \n0.Exit");
}
