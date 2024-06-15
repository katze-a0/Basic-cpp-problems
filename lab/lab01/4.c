#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[10];
    int roll_no;
    char address[10];
    char  phone_no[10];
};
int main()
{
int n,i;

printf("Enter no of students:");
//fflush(stdout);
scanf("%d",&n);
struct student s[n];
for(i=0;i<n;i++){
    printf("Enter name of student no.%d\n",i+1);
    fflush(stdout);
    printf("Enter name\n");
    scanf("%s",s[i].name);
    printf("Enter roll_no.:\n");
    scanf("%d",&s[i].roll_no);
     printf("Enter address:\n");
    scanf("%s",&s[i].address);
     printf("Enter phone number:\n");
    scanf("%s",&s[i].phone_no);
    
}

FILE *fptr=fopen("info.txt","a");

for(i=0;i<n;i++){
    //fscanf(fptr,"%s%d%s%s",s[i].name,&s[i].roll_no,s[i].address,s[i].phone_no);
    fprintf(fptr,"Name:%s\t\tRoll_no=%d\t\tAddress=%s\t\tPhone_number=%s\n",s[i].name,s[i].roll_no,s[i].address,s[i].phone_no);
    fflush(stdout);
}
fclose(fptr);
return 0;
}