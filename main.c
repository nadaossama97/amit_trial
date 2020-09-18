#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    int f=1;
    printf("Factorial");
    printf("\nEnter the number:");
    scanf("%d",&x);
    for(i=1;i<=x;i++){ //i=x;i>0;i--
      f*=i;
    }
    printf("Result=%d",f);
    return 0;
}
