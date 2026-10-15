#include<stdio.h>
struct Address{
    char village[100];
    int pincode;
};
struct Member{
    int id;
    char name[100];
    double shareCapital;
    struct Address Address;
    int maxIndex;
};
int main(){
    struct Member arr[1000];
     int n;
     double total;
     printf("Enter the number of members: ");
     scanf("%d",&n);
       int maxIndex=0;

     for(int i=0;i<n;i++){
        scanf("%d %s %lf %s %d",&arr[i].id,arr[i].name,&arr[i].shareCapital,arr[i].Address.village,&arr[i].Address.pincode);
        total=total+arr[i].shareCapital;
         if(arr[i].shareCapital>arr[maxIndex].shareCapital){
            arr[maxIndex].maxIndex=arr[i].shareCapital;
            arr[maxIndex].maxIndex=i;
        }
     }
     for(int i=0;i<n;i++){
        printf("%d %s %lf %s %d\n",arr[i].id,arr[i].name,arr[i].shareCapital,arr[i].Address.village,arr[i].Address.pincode);
     }
     printf("Total share capital: %lf",total);
     printf("Member with maximum share capital: %d %s %lf %s %d",arr[maxIndex].id,arr[maxIndex].name,arr[maxIndex].shareCapital,arr[maxIndex].Address.village,arr[maxIndex].Address.pincode);

     
}
