#include<stdio.h>
#include<conio.h>
int main()
{
float P,T,R,Si;
printf("Enter the princlple, time and rate\n");
scanf("%f %f %f",&P,&T,&R);
Si=P*T*R/100;
printf("The simple intrest is : %f",Si);
return 0;
}
