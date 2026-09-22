// WAP to count even and odd numbers in an array of size 10.
#include <stdio.h>
int main(){
    int arr[10],even=0,odd=0;
    printf("Enter 10 numbers:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8],&arr[9]);
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even Numbers are:-%d\n",even);
    printf("Odd Numbers are:-%d\n",odd);
    return 0;

}