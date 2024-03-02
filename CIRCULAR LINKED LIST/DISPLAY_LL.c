#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*Head;             //head is a global variable which can be access directly..

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    Head=(struct Node*)malloc(sizeof(struct Node));   //it will create a head node..
    Head->data=A[0];
    Head->next=Head;   //it is circular now..
    last=Head;

    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
     
}

void Display(struct Node *h)
{
    do
    {
        printf("%d ",h->data);
        h=h->next;
    }while(h!=Head);
    printf("\n");
    
}

int main()
{
    int A[]={2,3,4,5,6};
    create(A,5);

    Display(Head);
    return 0;  
}