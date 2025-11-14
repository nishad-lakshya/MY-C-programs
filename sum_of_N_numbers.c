#include <stdio.h>
#include <math.h>

int main()
{
    int n,x,sum = 0,i = 1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n){
        printf("enter a number to add:");
        scanf("%d",&x);
        sum = sum + x;
        i++;
    }
    printf("the sum of numbers is:%d",sum);

    return 0;
}
