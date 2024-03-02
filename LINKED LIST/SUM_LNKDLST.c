#include <stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
}*first=NULL;
 
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

//COUNTING A NODES IN A LINKED LIST...

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

//RECURSIVE FUNCTION
int Rcount(struct Node *p)
{
    if(p!=NULL)
        return count(p->next)+1;
    else 
        return 0;    
    
}

//SUM OF ALL ELEMENTS OF LINKED LIST....

int sum(struct Node *p)
{
    int sum=0;
    while(p)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return(sum);
}

//RECURSIVE FUNCTION..

int Rsum(struct Node *p)
{
    if(p==NULL)
        return 0;
    else 
        return Rsum(p->next) + p->data;    
}



int main(){

    int A[]={3,5,7,10,15};
    create(A,5);
   // printf("length is %d\n",Rcount(first));
    printf("sum is %d\n",Rsum(first));
   // Display(first);
    return 0;
}