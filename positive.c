#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n==0)
    {
        printf("the number is zero");
    }    
    else if(n>0)
    {
        
        printf("the number is positive");
    }
    else
    {
        printf("the number is negative");
        

    }
    return 0;
}