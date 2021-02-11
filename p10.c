#include<stdio.h>

int main()
{

    int num,n=4;
    for(int i=1;i<=n;i++)
    {
        num=i%2;

        for(int j=1;j<=n;j++)
        {
            printf("%d",num);
            num=!num;
        }
        printf("\n");
    }
}
