#include <stdio.h>
int main(){
    int arr[10]={20,30,40,50};
    int pos = 0;
    int n = 4;
    int i;
    int value = 10;
    for(i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    n++;
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}