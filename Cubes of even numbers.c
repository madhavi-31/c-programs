#include <stdio.h>
int main() 
{
    int n,i,sum = 0;
    scanf("%d", &n);
    for (int i=1;i<=n;i++) 
    {
        if (i%2==0) 
        {
            sum+=i*i*i; 
        }
    }
    printf("%d",sum);
    return 0;
}
