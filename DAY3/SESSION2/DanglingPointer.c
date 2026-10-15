#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p=malloc(sizeof(int));
    *p=100;
    printf("%d\n\n",*p);
    free(p);
    printf("%p",*p);

    return 0;
}