#include <stdio.h>
void reverse (int *p, int n){
 int *q=p+n-1;
 while(p<q){   
  int temp=*p;
  *p=*q;
  *q=temp;
  p++;
  q--;
 }
}
int main(){
 int a[5]={1,2,3,4,5};
 reverse(a,5);
 for(int i=0;i<5;i++){
  printf("%d ",a[i]);
 }
 return 0;
}