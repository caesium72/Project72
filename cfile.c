#include<stdio.h>
int main()
{
    int number = 0;
    printf("Enter a number ");
    scanf("%d", &number);

    printf("Table of %d", number);
        printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        
        printf("%d x %d = %d \n", number,i,number*i);
    }
    
    return 0;
}