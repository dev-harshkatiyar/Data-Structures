#include<stdio.h>
//#include<stdlib.h>

struct array 
{
    //int *A;
     int A[20];
    int size;
    int length;
};

void display(struct array arr)
{
    int i;
    printf("\n elements are \n ");
    for(i=0;i<arr.length;i++)
    {
        printf("%d",arr.A[i]);
    }
}

int main()
{
    struct array arr={{2,3,4,5,6},20,5};
   /* int i,n;
    printf("enter the size of array");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("enter the numbers of numbers");
    scanf("%d",&n);

    printf("enter all elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr.A[i]);
    arr.length=n;
    */


    display(arr);


}
