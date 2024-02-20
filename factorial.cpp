#include<stdio.h>
#include<conio.h>

int main()
{
int i,s,fact=1;
printf("Enter a number \n");
scanf("%d",&s);
if(s==0||s==1)
printf("factorial of %d! =%d",s,fact);

else
{
for(i=1;i<=s;i++)
fact=fact*i;
printf("factorial of %d!=%d",s,fact);
}
return 0;
}
