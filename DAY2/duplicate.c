#include<stdio.h>
#include<stdbool.h>
int main(){
   char str[]="abca";
   int hash[26]={0 };
   int i;
   for(i=0;str[i]!='\0';i++){
       hash[str[i]]++;
       char ch=str[i];
       int idx=ch-'a';
       if(hash[idx]>1){
           printf("Duplicate found");
           return 0;
       }
       else{
        hash[idx]=hash[idx]+idx;
       }
   }
   printf("No duplicates found");
   return 0;
}