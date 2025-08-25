#include<stdio.h>
#include<math.h>
int main()
{
    char alphabet;
    
    printf("Enter alphabet: ");
    scanf("%c",&alphabet);
    
    if(alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U')
    {
        printf("Vovel");
    }
    else
    {
        printf("consonants");
    }
    
    
    
    getch();
}
   
   
   
   
   
   
   
   
   
