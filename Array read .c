#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter  the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
output:
Enter size:5

Enter  the elements4 4 6 7 8 

4	4	6	7	8	

