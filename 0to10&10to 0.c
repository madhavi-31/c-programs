//print number from 0 to 10 and 10 to 0
#include<stdio.h>
int main()
{
    int i=0,j=10;
    while(i<=10)
    {
        printf("%d",i);
        i++;
    }
    printf("\n");
    while(j>=0)
    {
        printf("%d",j);
        j--;
    }
    return 0;
}
