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

struct array* merge(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;

    struct array *arr3=(struct array *)malloc(sizeof(int));

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[i])
            arr3->A[k++]=arr1->A[i++];
        else
            arr3->A[k++]=arr2->A[j++];    
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr1->length;j++)
        arr3->A[k++]=arr1->A[j];
    arr3->length=arr1->length+arr2->length;   
    arr3->size=10;
    return arr3;   
}

int main()
{
    struct array arr1={{2,6,10,15,25},10,5};
    struct array arr2={{3,4,7,18,20},10,5};
    struct array *arr3;
    arr3=merge(&arr1,&arr2);

    display(*arr3);

}