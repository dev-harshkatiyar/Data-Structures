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

//DISPLAY FUNCTION FOR A LINKED LIST OR ITERATIVE FUNCTION...

void Display (struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}



int main(){

    int A[]={3,5,7,10,15};
    create(A,5);

    Display(first);
    return 0;
}