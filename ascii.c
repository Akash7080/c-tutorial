#include<stdio.h>
int main()
{
    int i=0;
    char name[25];
    int sum=0;
    printf("enter the name");
    scanf("%s",name);
    while(name[i]='\0')
    {
        printf("\nthe sum of ASCII value %c is %d\n",name[i],name[i]);
        sum=sum+name[i];
        i++;
    }
    printf("the sum of all the string is %d",sum);
    return 0;
}