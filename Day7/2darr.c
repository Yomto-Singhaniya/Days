#include <stdio.h>
int main(){
    int i,j;
    int a[4][2];
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){ 
            printf("Enter the (%d,%d)",i,j);
            scanf("%d",&a[i][j]);          
        }
        printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){ 
            printf("%d ",a[i][j]);         
        }
        printf("\n");
    }
}