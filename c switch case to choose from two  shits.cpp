
#include<stdio.h>

#include<conio.h>

int main(){

 int n, i, f=1, rev=0, r, choice;

 printf("Enter value of n \n");

 scanf("%d",&n);

 printf("Enter your choice \n");

 scanf("%d",&choice);

switch(choice)

{

case 1:

    for(i+n;i>=1;i--){

        f=f*i;

    }

case 2:

    while(n!=0){

        r=n%10;

        rev=rev*10+r;

        n=n / 10;

    }

    printf("The reverse = %d",rev);

    break;

    defult:

    printf("Invalid choice");

}

getch();

}
