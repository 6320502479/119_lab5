#include <stdio.h>
int main()
{
    int i,n,s;
    scanf("%d",&n);
    if(n%2==0)
    {
        s=(n/2)-1;
    }
    else
    {
        s=n/2;
    }
    printf("%d",s);
}
