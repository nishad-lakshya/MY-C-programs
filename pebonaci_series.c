#include <stdio.h>

int main()
{
    int n,i=1,j=0,k=1,sum = 0;
    printf("enter the number:");
    scanf("%d",&n);
    printf("%d,%d",j,k);
    while(i<=(n-2)){
        sum = j + k;
        printf(",%d",sum);
        j = k;
        k = sum;
        i++;
        
        
    }
    

    return 0;
}