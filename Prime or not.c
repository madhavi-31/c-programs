#include <stdio.h>
int main() 
{
    int num, i, Prime = 0;
    scanf("%d", &num);
    if (num < 2) 
    {
        Prime = 0; 
    } 
    else
    {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0)
            {
                Prime = 0;
                break;
            }
        }
    }
    if (Prime)
    {
        printf("%d is a prime number.\n", num);
    } 
    else 
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
