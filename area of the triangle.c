#include<stdio.h>
int main(){
    float base, height,area;
printf(
    "enter the value of base: \n"
);
scanf(
    "%f",&base
);
printf(
    "enter the value of height: \n"
);
scanf(
    "%f",&height
);
area=0.5*base*height;
printf("\n area = %.2f",area);
return 0;
}
