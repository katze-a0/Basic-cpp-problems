#include<stdio.h>
int main(){

    int start_year,end_year;
    int j,i;
    int expense[12];

    char *month[12]={"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter the initial year:");
    scanf("%d",&start_year);
    printf("Enter the final year:");
    scanf("%d",&end_year);

    int range;
    range=end_year-start_year+1;
    
    int total[range],avg=0;
     
      for (i = 0; i < range; i++) {
        total[i] = 0;
    }
if (range <= 0) {
        printf("Invalid range of years.\n");
        return 1;
    }
    else{
    printf("-----Expenditure over years-----\n");
    for(i=0;i<range;i++){
        printf("Expenditure in  year %d",start_year+i);
        printf("\n");
        for(j=0;j<12;j++){

            printf("Enter expenditure of %s month: ",(month[j]));
            scanf("%d",&expense[j]);
            total[i]+=expense[j];
            printf("\n");
        }
          printf("\n");
    }}
 printf("----------Average and total expenses over each year-----------");
 for(i=0;i<range;i++){
printf("Total expenditure of year %d = %d\n",(start_year+i),total[i]);
printf("Average expenditure of year %d =%d\n",(start_year+i),total[i]/12);

 }
 return 0;

} 
