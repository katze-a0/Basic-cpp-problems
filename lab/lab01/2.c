#include<stdio.h>
#include<string.h>
int main(){

     char given[50]="idea without execution is worthless";
     int i=0;
     int length;
     int found=0;
     length=strlen(given);
     char search='c';
    while(i<length){
     if(given[i]==search){
          printf("C is found in position:%d",i+1);
         found++;
     }
     i++;}
     if(found==0){
      printf("C not found in sentence!");}

    
return 0;
}