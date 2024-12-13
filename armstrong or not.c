#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,rem,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is a armstrong number");
    }
    else
    {
        printf("%d is not a armstrong number");
    }
    return 0;
}
