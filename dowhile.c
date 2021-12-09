#include<stdio.h>
//#include<conio.h>
 void main()
{
    char ch;
    int c,d;
    do{
        printf("1.hello\n2.java\n3.exit");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("hello");
            break;
            case 2:
            printf("java");
            break;
            case 3:
            printf("exit");
            break;
            default:
            printf("not found");
        }
        printf("do u want more number to enter");
        scanf("%c",&ch);
    }while(c=='y');
    //return 0;
}