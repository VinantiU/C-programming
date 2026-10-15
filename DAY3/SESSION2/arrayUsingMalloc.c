#include<stdio.h>
int main(){
    int n=0,sum=0;
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++){
        sum+=*(p+i);
    }
    printf("Sum: %d\n", sum);
    free(p);
    return 0;
}