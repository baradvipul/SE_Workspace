#include <stdio.h>

int main() 
{
    int arr[5];
    int i, max;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++) 
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    max = arr[0]; 

    for(i = 0; i < 5; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}

    

