#include<stdio.h>
#include<conio.h>
int main()
{
float F,C;
printf("Enter the temperature in F\n");
scanf("%f",&F);
C=(F-32)/1.8;
printf("The temperature in C is: %f ",C);
return 0;
}
