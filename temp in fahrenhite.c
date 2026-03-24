#include<stdio.h>

int main(){
    float c, F;
printf(
    "enter the temp in centegrate: \n"
);
scanf(
    "%f",&c
);
F=1.8*c+32;
printf("\n TEMP IN FARENHITE = %.2f",F);
return 0;
}
