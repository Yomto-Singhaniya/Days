#include <stdio.h>
int main(){
    int i,j;
    int a[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            printf("Enter the (%d,%d)",i,j);
            scanf("%d",&a[i][j]);          
        }
        printf("\n");
    }
    int b[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            printf("Enter the (%d,%d)",i,j);
            scanf("%d",&b[i][j]);          
        }
        printf("\n");
    }
    int c[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
           c[i][j]=a[i][j]+b[i][j];          
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            printf("%d ",c[i][j]);         
        }
        printf("\n");
    }
}