#include<stdio.h>
int main(){
    int month, day;
printf("enter no. of months: \n");
scanf("%d", &month);
switch (month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    day=31;
    break;
case 2:
case 4:
case 6:
case 11:
    day=30;
    break;
default:
    printf("invalid month");
}
{ 
    printf("\n no. of days in %d month = %d", month,day);

 }
getch()
}
