include<stdio.h>
int main ()
{
    int n,rev=0,rem,temp;
    scanf("%d",&n);
    temp=n;
    while (n<0)
    {
        rem=rem*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
    printf("%d is a palindrome");
    }
    else
    {
       printf("%d is not a palindrome");
    }
    return 0;
}
