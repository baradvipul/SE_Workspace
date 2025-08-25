#include<stdio.h>
#include<math.h>
int main()
{
   double principal,rate,time,ammount,ci;
   int n;
   
   printf("Enter principal: ");
   scanf("%lf",&principal);
   
   printf("Enter Annual interest Rate (%%): ");
   scanf("%lf",&rate);
   
   printf("Enter Time (years): ");
   scanf("%lf",&time);
   
   printf("Enter Number of time interest applied per year (n): ");
   scanf("%d",&n);
   
   rate = rate / 100;
   
   ammount=principal*pow((1+rate/n),n*time);
   ci=ammount-principal;
   
   printf("\n ci = %.2lf\n",ci);
   printf("total ammount=%.2lf\n",ammount);
   
   
   
   
   
   
   
   
   getch();
}
