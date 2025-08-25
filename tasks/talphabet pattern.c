#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,num;
    
    printf("Enter Number: ");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",j+'A');
        }
        printf("\n");
    }

    return 0;
}
