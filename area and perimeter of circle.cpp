#include<stdio.h>
#include<conio.h>
#define Pi 3.14
int main(){
// const float Pi=3.14
float a,p,r;
printf("Enter the radius \n");
scanf("%f ",&r);
a = Pi*r*r;
p = 2*Pi*r;
printf("Area of the circle is %f", a);
printf("\n perimeter = %f", p);
return 0;
}
