#include<stdio.h>
#include<conio.h>
int main ()
{
int a,b,A,S,M,R;
float div;
char op;
printf("Enter any two numbers and the operation want to perform.\n");
scanf("%d %d ",&a,&b);
scanf("%c",&op);
if(op=='+')
{
A=a+b;
printf("Sum = %d\n",A);
}
else if(op=='-')
{
if(a>b)
S=a-b;
else
S=b-a;
printf("Difference = %d\n",S);
}
else if(op=='*')
{
M=a*b;
printf("Product = %d\n",M);
}
else if(op=='%')
{
if(a>b)
R=a%b;
else
R=b%a;
printf("The reminder = %d",R);
}
else if(op=='/')
{
if(a>b)
div=(float)a/b;
else
div=(float)b/a;
printf("Division = %f",div);
}
return 0;
}
