 #include <stdio.h>
 int main(){
 int i,j,large=0,c,d;
    int a[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){ 
            printf("Enter the (%d,%d)",i,j);
            scanf("%d",&a[i][j]);          
        }
        printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){ 
           if(a[i][j]>large){
            c=i;
            d=j;
            large=a[i][j];
           }         
        }
        printf("\n");
    }
    printf("value ofposition(%d,%d) is %d",c,d,large);
}
// given a martix  a of dimension n*m and 4 cordinats are taken from the user new matrix is formed. return the sum of all elements in that rectangle.