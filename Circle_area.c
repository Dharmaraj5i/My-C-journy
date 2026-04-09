#include<stdio.h>
intmain(){
/*
calculating the area of circle 
*/
float pi=3.14,radius;
printf("enter the radius of circle:");
scanf("%f",&radius);
float area= pi*radius*radius;
printf("the area of circle is:%f",area);
return 0;
}
