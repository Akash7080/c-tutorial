#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two number to a and b");
    scanf("%d %d",&a,&b);
    while(b !=0)
    {
        a++;
        b--;
    }
    printf("result of a %d",a);
    return 0;
}