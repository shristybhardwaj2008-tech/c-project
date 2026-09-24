#include<stdio.h>
#include<string.h>

struct student{
int roll;
char name[50];
float marks;
};

int main(){
struct student s[100];
int n = 0,choice;

printf("=== student management system ===\n");

while(1){
  printf("\n1. add student\n2. display students\n3. Exit\n");
  printf("enter choice:");
  scanf("%d",&choice);

if(choice == 1){
  printf("enter roll no:");
  scanf("%d",&s[n].roll);
  printf("enter name:");
  scanf("%s",s[n].name);
  printf("enter marks:");
  scanf("%f",&s[n].marks);
n++;
  printf("student added!\n");
}
else if(choice == 2){
   printf("\n--- student list ---\n");
   for(int i=0; i<n; i++){
      printf("roll:%d | name:%s | marks: %2f\n",s[i].roll, s[i].name, s[i].marks);
    }
 }
else if(choice == 3){
    break;
}
else{
   printf("invalid choice!\n");
   }
}
return 0;
}
