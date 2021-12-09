#include<stdio.h>
int main()
{
    int n,rev=0,store,left;
    printf("enter the number");
    scanf("%d",&n);
    store=n;
    while(n>0)
    {
        left=n%10;
        rev=rev*10+left;
        n=n/10;
    }
    printf("given number=%d",store);
    printf("its reverse is =%d\n",rev);
    return 0;
}