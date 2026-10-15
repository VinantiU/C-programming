#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=10042421;
    int *p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    if(p!=NULL){
        for(int i=0;i<n;i++){
            *(p+i)=i+1;
        }
    }
    

  


}