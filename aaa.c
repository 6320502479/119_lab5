#include<stdio.h>
int main()
{
    int a,c,k=0,j,i=1;
    scanf("%d",&a);
    while(k!=a)
    {
        c=i;
        for(j=0; j<=c; j++)
        {
            if(c%2==0)
            {
                c/=2;
            }
            if(c%3==0)
            {
                c/=3;
            }
            if(c%5==0)
            {
                c/=5;
            }
        }
        if(c==1)
        {
            k++;
        }
        i++;
    }
    printf("%d",i-1);
    return 0;
}
