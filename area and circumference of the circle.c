#include<stdio.h>
#define pi=3.14
int main(){
    float r,area,circumference;
printf(
    "enter the value of radius: \n"
);
scanf(
    "%f",&r
);
circumference=2*pi*r;
area=pi*r*r;
printf("\n circumference = %.2f",circumference);
printf("\n area = %.2f", area);
return 0;
}
