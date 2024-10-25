# include<stdio.h>
# include<math.h>
int main()
{
    int a,b,c,d;
    float r1,r2;
    printf("Enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        printf("Roots are real and district");
        r1=-b+sqrt(d)/(2*a);
        r2=-b-sqrt(d)/(2*a);
             printf("r1=%f\n",r1);
        printf("r2=%f\n",r2);
    }
    else if(d<0)
    {
        printf(" Roots are real and imaginary ");
    }
    else
    {
        printf("Roots are real and equal");
        r1=r2=-b/(2*a);
        printf("Root1:%f",r1);
        printf("Root2:%f",r2);
        
    }
    return 0;
}
