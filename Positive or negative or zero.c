# include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("The number is positive ");
    }
    else if(n==0)
    {
        printf("The given number is zero");
    }
    else
    {
        printf(" The given number is negative ");
    }
    return 0;
}
