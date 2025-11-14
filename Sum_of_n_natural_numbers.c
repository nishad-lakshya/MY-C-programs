int main()
{
    int n,i=0,sum = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    do{
        sum = sum + n;
        n--;
    }while(n>0);
    
    printf("the sum of the number:%d",sum);
   
    return 0;
}
