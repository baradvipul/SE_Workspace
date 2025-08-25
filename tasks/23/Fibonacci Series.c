#include<stdio.h>
#include<conio.h>
int main()
{
    int n,First=0,Second=1,next,i;
    
    printf("Enter the numbers of terms: ");
    scanf("%d",&n);
    
    printf("Fibonacci series: ");
    
    for(i=0;i<n;i++)
    {
        printf("%d",First);
        next=First+Second;
        First=Second;
        Second=next;
    }
    
    return 0;
}
