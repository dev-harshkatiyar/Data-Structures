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
        printf("%d",arr.A[i]);
    
}

void insert (struct array *arr,int index,int x)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
            arr->A[index]=x;
            arr->length++;
        }
    }
}

int binarysearch(struct array arr,int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else    
            l=mid+1;        
    }
    return -1;
}


int main()
{
    struct array arr={{2,3,4,5,6},10,5};
  //  insert(&arr,0,10);
    printf("%d\n",binarysearch(arr,6));
    display(arr);
    
}