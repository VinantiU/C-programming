#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr=(int*)malloc(5*sizeof(int));
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    int *temp=realloc(arr,10*sizeof(int));
    arr=temp;
    arr[5]=60;
    arr[6]=70;
    arr[7]=80;
    arr[8]=90;
    arr[9]=100;
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    free(temp);
    return 0;
}