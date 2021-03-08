#include<stdio.h>
int main()
{
    int n,count=0,l[3]={2,3,5},m,i,j=0;
    scanf("%d",&n);
    for(i=1;count!=n;i++)
    {
        m=i;
        while(j!=3)
        {
            if(m%l[j]==0)
                m/=l[j];
            else
                j++;
        }
        j=0;
        if(m==1)
        {
            count++;


        }
    }
printf("%d",i-1);

}
