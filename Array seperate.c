#include<stdio.h>
int main() 
{
    int a[10],b[10],c[10],i,n, j=0,k=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\n");
    for(i=0;i<k;i++)
    {
        printf("%d\t", c[i]);
    }
    return 0;
}
