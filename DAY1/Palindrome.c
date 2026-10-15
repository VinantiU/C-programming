#include<stdio.h>
int main(){
    int n;
    printf("Enter a num");
    scanf("%d",&n);

    if(n<0){
        printf("false");

    }
    int original=n;
    int rem=0;
    int reverse=0;
     while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
     }
     if(reverse==original){
        printf("True");
     }
     else{
        printf("False");
     }
}