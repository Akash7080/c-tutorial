#include<stdio.h>
//#include<conio.h>
int main()
{
    int i,n;
    printf("enter the number for multiplication");
    scanf("%d",&n);
    for(i=1;i<=10;++i)
    {
    
      printf("%d*%d=%d\n",n,i,n*i);  
    }
    return 0;
}