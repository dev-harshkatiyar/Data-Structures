#include<stdio.h>
//using namespace std;

void fun(int n)
{
    if(n>0)
    {
       // printf("%d",n);
       // fun(n-1);
        fun(n-1);
        printf("%d",n);
    }
}
int main()
{
    int x=3;
    fun(x);
}