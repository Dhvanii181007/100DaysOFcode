//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>

int main(){



int l,b,area,perimeter;

printf("enter length:\n");
scanf("%d",&l);

printf("enter breadth:\n");
scanf("%d",&b);

area=l*b;
perimeter=2*(l+b);

printf("area of rectangle = %d\n",area);
printf("perimeter of rectangle = %d\n",perimeter);

return 0;
}
