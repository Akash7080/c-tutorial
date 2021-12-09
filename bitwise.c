#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) 
{
//Complete the following function.
int maxAnD;
int maxOR;
int maxXOR;
for(i=1;i<=n;i++){
    for(j=i+1;j<=n;j++){
        if(((i&j)>maxAND)) && ((i&j)<k)){
            maxAND=i&j;
        }
        if(((i&j)>maxOR)) && ((i&j)<k)){
            maxOR=i&j;
        }
        if(((i&j)>maxXOR)) && ((i&j)<k)){
            maxXOR=i&j;
        }
           
           
    }
}
printf("%d\n %d\n %d\n",maxAND,maxOR,maxXOR);
}


//void calculate_the_maximum(int n, int k) {
  //Write your code here.

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
