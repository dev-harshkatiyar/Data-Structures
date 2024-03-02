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

int main()
{
    struct array arr={{2,3,25,5,6},10,5};

   // printf("%d\n",get(arr,2));
   // set(&arr,0,15); 
  //  printf("%d\n",max(arr));
   // printf("%d\n",min(arr));
  //  printf("%d\n",sum(arr));
      printf("%f\n",avg(arr));  
   // insert(&arr,0,10);
    display(arr);
    
}