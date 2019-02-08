#include<stdio.h>
int main()
{
    int i,N,K,sum,add=0;
    scanf("%d %d",&N,&K);
    for(i=1;i<=N;i++)
    {
        sum=0+i;
        printf("%d",sum);
    }
     for(i=1;i<=K;i++)
    {
        
        add=add+i;
    }
    printf("\n%d",add);   
    return 0;
}
