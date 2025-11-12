#include <stdio.h>

int main()
{
    int n,rem,rev = 0, temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp = n;
    while (n>0){
        rem = n%10;
        rev = (rev*10) + rem;
        n = n/10;
    }
    if (temp==rev)
    printf("\nit is peridrom");
    else
    printf("\nit is not");
    return 0;
}