# include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float avg;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=a+b+c+d+e/5;
    printf("The average of 5 subjects:%f",avg);
    if(avg>90)
    {
        printf("/n the gade is A+");
    }
    else if(avg>=90)
    {
        printf("/n the grade is A");
    }
    else if(avg>=80)
    {
        printf("/n the grade is B");
    }
    else if(avg>=70)
    {
        printf("/n the grade is C");
    }
    else if(avg>=60)
    {
        printf("/n the grade is D");
    }
    else
    {
        printf("Fail");
    }
}
