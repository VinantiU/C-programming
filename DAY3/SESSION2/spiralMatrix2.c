#include<stdio.h>
int main(){
   int  top=0;
    int bottom=2;
   int left=0;
    int right=3;
    int a[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
        
    };
    int (*p)[4 ]=a;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            printf("%d ",p[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            printf("%d ",p[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                printf("%d ",p[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                printf("%d ",p[i][left]);
            }
            left++;
        }
    }
}