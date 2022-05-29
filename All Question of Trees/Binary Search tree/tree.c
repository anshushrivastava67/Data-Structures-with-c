/**************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;
struct node *par,*q;

void inorder(struct node *root)
{
    if(root!=NULL)
    {
       inorder(root->left);
        printf("\nValue:%d",root->data);
        inorder(root->right);
    }
    //Note:One problem is still there that tree is empty is repeating.
    // else
    // {
    //      inorder(root->left);
    //     printf("\nValue:%d",root->data);
    //     inorder(root->right);
    // }
 }

void insBST(struct node *root,int x)
{
    
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    par=(struct node*)malloc(sizeof(struct node));
q=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    if(root==NULL)
    {
        root=p;
    }
    else
    {
        par=NULL;
        q=root;
        while(q!=NULL)
        {
            par=q;
            if(x<q->data)
            {
                q=q->left;
            }
            else
            {
                q=q->right;    
            }
        }
        if(x<=par->data)
        {
            par->left=p;
        }
        else
        {
            par->right=p;
        }
    }
    // inorder(root);
}

void del_A(struct node *root)
{
    struct node *child,*par,*p,*q;
    child=(struct node*)malloc(sizeof(struct node));
    par=(struct node*)malloc(sizeof(struct node));
q=(struct node*)malloc(sizeof(struct node));
p=(struct node*)malloc(sizeof(struct node));
    if(p->left!=NULL)
    {
        child=p->left;
    }
    else if(p->right!=NULL)
    {
        child=p->right;
    }
    else{
        child=NULL;
    }
    if(par==NULL)
    {
        root=child;
    }
    else{
        if(p=par->left)
        {
            par->left=child;
        }
        else
        {
            par->right=child;
        }
    }
}

void del_B(struct node *root)
{
    struct node *insuc,*p,*par,*q, *parinsuc=p;
    par=(struct node*)malloc(sizeof(struct node));
q=(struct node*)malloc(sizeof(struct node));
p=(struct node*)malloc(sizeof(struct node));
    insuc=p->right;
    while(insuc->left!=NULL)
    {
        parinsuc=insuc;
        insuc=insuc->left;
    }
    del_A(root);
    insuc->left=p->left;
    insuc->right=p->right;
    if(p=par->left)
    {
        par->left=insuc;
    }
    else
    {
        par->right=insuc;
    }
}

void deleteBST(struct node *root,int x)
{
    struct node *par,*p,*q;
    par=(struct node*)malloc(sizeof(struct node));
q=(struct node*)malloc(sizeof(struct node));
p=(struct node*)malloc(sizeof(struct node));
    if(root==NULL)
    {
        printf("Tree is Empty!!");
    }
    par=NULL;
    p=root;
    while(p!=NULL)
    {
        if(x==p->data)
        {
            break;
        }
        else if(x<p->data)
        {
            par=p;
            p=p->left;
        }
        else
        {
            par=p;
            p=p->right;
        }
        
    }
    if(p==NULL)
    {
        printf("Empty!!");
    }
    else
    {
        if(p->left!=NULL && p->right!=NULL)
        {
            del_B(root);
        }
        else
        {
            del_A(root);
        }
    }
}

void menu(){
    printf("Operation:\n1.Insertion \n2.Deletion \n3.Inorder Traversal \n4.Menu \n0.Exit");
}

int main()
{
    
    int ch,x,i=0,a;
    struct node *root=NULL,*p;
    char str;
    root=(struct node*)malloc(sizeof(struct node));
    p=(struct node*)malloc(sizeof(struct node));
    printf("Operation:\n1.Insertion \n2.Deletion \n3.Inorder Traversal \n4.Menu \n0.Exit");
    do{
        printf("\nEnter the choice:");
        scanf("%d",&ch);
        switch(ch){
        case 1:
        
            printf("Enter the value:");
            scanf("%d",&x);
            insBST(root,x);
            // printf("\n%d",root);
            break;
        
        case 2:
            printf("Enter the value you want to delete:");
            scanf("%d",&x);
            deleteBST(root,x);
            break;
        
        case 3:
            if(root==NULL)
            {
                printf("Tree is Empty!!");
            }
            else
            {
                inorder(root);
                break; 
            }
        
        case 4:
            menu();
            break;
        
        case 0:
            printf("Your Operation is Over!!");
            break;
        
        }
        printf("\nIf you want to continue:\npress y or n:");
        scanf("%s",&str);
    }while(str=='y' || str=='Y');
    printf("Your Operation is Over!!");
    return 0;
}   
