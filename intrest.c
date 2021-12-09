//calculate the intrest of 10 years by akash singh
#include<stdio.h>
#define PRINCIPAL 5000
#define PERIOD  10
int main()
{
    int year;
    float ammount,inrate,value;
    ammount=PRINCIPAL;
    inrate=0.11;
    year=0;
    
    while(year <= PERIOD)
    {
        printf("%d %8.2f\n",year,ammount);
        value=ammount+inrate*ammount;
        year=year+1;
        ammount=value;

    }
   return 0;
} 
