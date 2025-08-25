#include<stdio.h>
#include<conio.h>
void main()
{
    int num1=9;
    int num2=8;
    int add,sub,multi,division,Num;
    
 
    
    printf("\n select your formula \n press1 for Addition \n press2 for substraction \n press3 for multiplication \n press4 for Division ");
        printf("\n Enter Number");
    scanf("%d",&Num);

    switch(Num)
    {
     case 1:  add = num1+num2;
    printf("\n Addition of %d + %d  = %d",num1,num2,add);
    break;
    
     case 2: sub = num1 - num2;
    printf("\n Substraction of %d - %d  = %d",num1,num2,sub);
    break;
    
    case 3:multi = num1*num2;
    printf("\n Multiplication of %d * %d  = %d",num1,num2,multi);
    break;
    
    case 4: division = num1/num2;
    printf("\n Division of %d / %d  = %d",num1,num2,division);
    break;
    
    default: printf("Your number is invalid");
    break;
    }
    
    getch();
}
    
