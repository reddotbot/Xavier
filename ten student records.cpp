#include<stdio.h>
#define NUM 10
int main(){
struct student
{

 int roll_no;
 char name[20];
 int clas;
 int marks[5];

};
struct student s[NUM];
int i,j,total;
float percentage;
for(i=0;i<NUM;i++)
{

    printf("\n Enter data for student %d:",i+1);
    printf("\n Enter roll no:");
    scanf("%d",&s[i].roll_no);
    printf("\n Enter name:\n");
    scanf("%s",s[i].name);
    printf("\n Enter class:");
    scanf("%d",&s[i].clas);
    fflush(stdin);
    printf("\n Enter marks in five subjects:");
}

}
