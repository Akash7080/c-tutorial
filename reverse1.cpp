#include<stdio.h>
int main()
{
     int n,rev;
     printf("Enter a number");
     scanf("%d",&n);
     while(n!=0)
     {
         rev=n%10;
         n=n/10;
         printf("%d",rev);
     }
    return 0;
}