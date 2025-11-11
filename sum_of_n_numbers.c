#include <stdio.h>

int main()
{
    int i=0,n,sum = 0,digits;
    printf("Enter the number");
    scanf("%d",&n);
    do {
    sum = sum+i ;
    
    i++;
    }while(i<=n);
    
    printf("%d",sum);
    return 0;
}