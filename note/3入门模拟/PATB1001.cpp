#include<cstdio>
int main()
{
    int n;
    int step=0;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2==1)
        {
            n=(3*n+1)/2;
        }
        else
        {
            n=n/2;
        }
        step++;
    }
    printf("%d\n",step);
    return 0;
}