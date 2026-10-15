#include<stdio.h>
int main(){
    int n,i;
    printf("enter number of rows");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

