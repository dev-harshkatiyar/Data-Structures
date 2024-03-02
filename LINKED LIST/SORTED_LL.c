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

//INSERTING A NEW NODE IN A LINKED LIST...

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

//SORTED LINKED LIST..

void SortedInsert(struct Node *p,int x)
{
    struct Node *t,*q=NULL;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;

    if(first==NULL)   //this check this is first node or not..if not then t is the first node or the linked list is already empty..
        first=t;
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
    if(p==first)          //the new element is going to be inserted before the first node....
    {
        t->next=first;
        first=t;
    }
    else
    {
        t->next=q->next;
        q->next=t;

    }

    }



}



int main(){

  //  int A[]={10,20,30,40,50};
  //  create(A,5);
    //insert(first,2,6);
    SortedInsert(first,35);
    SortedInsert(first,40);

    Display(first);
    printf("\n\n");
    return 0;
}