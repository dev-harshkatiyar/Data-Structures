#include<stdio.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void display(struct array arr)
{
    int i;
    printf("elements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
    
}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void Rearrange(struct array *arr)             //not running
{
    int i,j;
    i=0;
    j=arr->length-1;

    while(i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[i]>=0)j--;
        if(i<j)swap(&arr->A[i],&arr->A[j]);
    }
}

int main()
{
     struct array arr={{2,-1,25,10,-15,-7},10,6};
      Rearrange(&arr);
    
}