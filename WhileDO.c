#include<stdio.h>
int main()
{
    int k,sum=0;
    do{
        printf("enter num=");
        scanf("%d",&k);
        sum=sum+k;
    }while(k!=0);
    printf("summation=%d",sum);
}