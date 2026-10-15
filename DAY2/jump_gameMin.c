#include<stdio.h>
int main(){
    int minreach=0,arr[100],n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(i+arr[i]<minreach){
            minreach=i+arr[i];
        }
        if(minreach>=i){
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}