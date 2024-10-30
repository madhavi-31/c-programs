#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the a and b values:");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case '+' :printf("the addition is %d,a+b");
        break;
         case '-' :printf("the subtraction is %d,a-b");
        break;
         case '*' :printf("the multiplication is %d,a*b");
        break;
         case '/' :printf("the divided is %d,a/b");
        break;
         case '%' :printf("the module is %d,a%b");
        break;
        default:printf("invalid");
        break;
    }
}
