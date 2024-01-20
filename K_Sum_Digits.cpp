#include<stdio.h>
#include<limits.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int m;
    int sum=0,rem;
    scanf("%d",&m);
     
        while(m>0)
        {
            rem=m%10;
            sum+=rem;
            m/=10;
        }

    

    printf("%d\n",sum);
    return 0;
}