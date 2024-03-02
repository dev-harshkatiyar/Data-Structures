#include<stdio.h>
#include<stdlib.h>

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

int get(struct array arr,int index)
{
    if(index>=0 && index<arr.length)
        return arr.A[index];
        return -1;
}
void set(struct array *arr,int index,int x)           //set function will change the value at a given index
{
    if(index>=0 && index<arr->length)
        return arr->A[index]=x;
}

int max(struct array arr)
{
    int max=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
       {
        if(arr.A[i]>max)
            max=arr.A[i];
       }
       return max;
}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int min(struct array arr)
{
    int min=arr.A[0];
    int i;
    for(i=i;i<arr.length;i++)
    {
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int sum(struct array arr)
{
    int s=0;
    int i;
    for(i=0;i<arr.length;i++)
    {
        s=s+arr.A[i];
    }
    return s;
}

float avg(struct array arr)
{
    return (float)sum(arr)/arr.length;
}

void Reverse(struct array *arr)
{
    int *B;
    int i,j;

    B=(int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++)
        B[j]=arr->A[i];
    for(i=0;i>arr->length;i++)
       arr->A[i]=B[i];

}

void Reverse2(struct array *arr)
{
    int i,j;
    int temp;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
}

void insertsort(struct array *arr,int x)
{
    int i=arr->length-1;
    if(arr->length==arr->size)
        return;
    while(i>0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }    
    arr->A[i+1]=x;
    arr->length++;
}

int isSorted(struct array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}

void rearrange(struct array *arr)
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
   // struct array arr={{2,3,10,5,15},10,5};

    struct array arr={{2,-1,25,10,-15,-7},10,6};
    rearrange(&arr);
    display(arr);

   // insertsort(&arr,12);
   // printf("%d \n",isSorted(arr));  
    
    
}