#include<stdio.h>
int minEatingSpeed(int* piles, int pilesSize, int h){
    int speed=right;
    while(left<=right){
        int mid=left+(right-left)/2;
        int hours=0;
        for(int i=0;i<pilesSize;i++){
            hours+=(piles[i]+mid-1)/mid;
        }
        if(hours<=h){
            speed=mid;
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    return speed;
}
int main(){
     int piles[]={1,2,3,4,5,6,7,8,9,10};
    int left=1;
    int right=0;
    int h=8;
    int pilesSize=4;
    for(int i=0;i<pilesSize;i++){
        if(piles[i]>right){
            right=piles[i];


        }
    }
    




    
}