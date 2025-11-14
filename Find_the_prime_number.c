#include <stdio.h>
#include <math.h>

int main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        break;
        
    }
    if (i==n)
    printf("the number is prime");
    else
    printf("the number is not prime");
   
    return 0;
}
