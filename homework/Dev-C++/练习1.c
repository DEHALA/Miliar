#include<stdio.h> 
#include<math.h>
int main(void)
{  
int money,year;
double sum,rate;
scanf("%d %d %lf",&money,&year,&rate);
sum=money*pow(1+rate,year);
printf("sum = %.2f",sum);
}

