#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    printf("enter the number\n");
    scanf("%d",&number);
    do{
        printf("guess the number\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please\n");
        }
        else if(guess<number){
            printf("the number is higher\n");
        }
        else{
            printf("you guess it in right %d attempts\n",nguesses);
        }
        nguesses++;

    }while(guess!=number);
}