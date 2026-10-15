#include<stdio.h>
int main (){
    int n;
    printf("n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            printf("FuzzBuzz");
        }
        else if(i%3==0){
            printf("Fuzz");
        }
    }
}

