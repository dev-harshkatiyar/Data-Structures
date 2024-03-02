//code for inserting an element in an array

#include<stdio.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void display(struct array arr)    //print all the elements of the array 
{
    int i;
    printf(" \nelements are\n ");
    for(i=0;i<arr.length;i++)
        printf(" %d ",arr.A[i]);
    
}

void append(struct array *arr,int x)          //add new element at the end of the array
{
  if(arr->length<arr->size)                  
  arr->A[arr->length++]=x;
}


void insert (struct array *arr,int index,int x)        
{
    int i;
    if(index>=0 && index <=arr->length)          //checking index is valid or not
    {
        for(i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
            arr->A[index]=x;
            arr->length++;
        
    }
}


int main()
{
    struct array arr={{2,3,4,5,6},10,5};
   // append(&arr,10);
    insert(&arr,2,9);
    display(arr);
    
}