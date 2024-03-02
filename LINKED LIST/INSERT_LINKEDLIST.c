#include <stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
}*first;
 
//CREATING A LINKED LIST..

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));   //it will create a new node
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}

int count (struct Node *p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;

}

//DISPLAY FUNCTION FOR A LINKED LIST OR ITERATIVE FUNCTION...

void Display (struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

//INSERTING A NEW NODE IN A LINKED LIST BEFORE AFTER AND END...

void insert(struct Node *p,int index,int x)
{
    struct Node *t;
    int i;

    if(index < 0 || index > count(p))
        return;
    t=(struct Node *)malloc(sizeof(struct Node));    
    t->data=x;

    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(i=0;i<index-1;i++)
            p=p->next;
         t->next=p->next;
         p->next=t;  
    }
}

void InsertLast(int x)
{
     struct  Node* t,*Last;
     t=(struct Node *)malloc(sizeof(struct Node));
     t->data=x;
     t->next=NULL;
         
        if(first==NULL) 
        {
            first=Last=t;
        }
        else
        {
            Last->next=t;
            Last=t;
        }
    
        
}




int main(){

    int A[]={3,5,7,15};
      create(A,4);
     insert(first,2,6);
     // InsertLast(8);
    Display(first);
    return 0;
}