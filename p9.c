
#include<stdio.h>


int main()
{

    int n=5;
    for(int i=1;i<=n;i++)
    {
       int  num=-1;

        for(int j=n;j>=1 &&j<=n;j+=num){
            int var=(i==1)?n:j;

            if(j<=i){
                printf("%d",var);
            }else{
              printf(" ");
            }
            if(j==1){
                num=1;
            }
        }
        printf("\n");
    }
}
