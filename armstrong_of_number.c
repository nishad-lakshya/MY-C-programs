
#include <stdio.h>
#include <math.h>

int main()
{
    int n,i=0,x,y,z,count = 0,arm=0;
    printf("Enter the number:");
    scanf("%d",&n);
    x = n;
    while(x>0){
    x = x / 10;
    count++;
    }
    y = n;
    while(y!=0){
    z = y%10;
    arm = arm + pow(z,count);
    y = y/10;
}
    if (arm==n)
    printf("this number is arm");
    else
    printf("this is not arm");


    return 0;
}
