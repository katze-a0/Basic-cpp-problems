#include<stdio.h>
struct student{
    char name[10];
    int mark;
};
int main(){
    int i=0;
    int n;
struct student s[n];
printf("enter no of students:");
fflush(stdout);
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("enter name of student no.%d",i+1);
    fflush(stdout);
    printf("enter name\n");
    scanf("[^\n]%",s[i].name);
    printf("enter marks in c:\n");
    scanf("%d",&s[i].mark);

}
printf("Retrieviing details\n\n");
for(i=0;i<n;i++){
    printf("Name of student no.%d:%s",i+1,s[i].name);
   
    printf("Marks in c:%d\n",s[i].mark);
}

return 0;
}