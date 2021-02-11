#include<stdio.h>

int main()
{
    int k=1,num=1,n=5;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d",k);
            k+=num;
        }
        printf("\n");
        num*=-1;
        k+=n+num;
    }
}
