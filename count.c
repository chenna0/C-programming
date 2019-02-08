#include<stdio.h>
int main()
{
    long long n;
    int d = 0;
    scanf("%lld",&n);
    while(n != 0)
    {
        n=n/10;
        ++d;
    }
    printf("%d",d);
return 0;
}
