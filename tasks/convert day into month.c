#include<stdio.h>
#include<conio.h>
void main()
{
    float day,month;
    
    printf("Enter days : ");
    scanf("%f",&day);
    
    month=day/30.44;
    
    printf("days in month: %2f\n",month);
}
