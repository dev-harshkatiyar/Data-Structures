#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first;


void create(int A[],int n)
{
    int i;
    struct Node *d,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    
    for(i=1;i<n;i++)
    {
        d=(struct Node *)malloc(sizeof(struct Node));
        d->data=A[i];
        d->next=NULL;
        last->next=d;
        last=d;
        
    }
}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}


int main()
{
    int n,i;
    printf("enter the no.of elements\n");
    int A[100];
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    create(A,n);
    printf("\nLINKED LIST IS :");
    Display(first);
    return 0;
}