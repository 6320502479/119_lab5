#include <stdio.h>
int main()
{
    int N,i[3]={2,3,5},k=1,num,j=0,re=2;
    scanf("%d",&N);
    num=re;
    while(k<=N)
    {
        while(num!=1)
        {
            if(num%i[j]==0)
            {
                num/=i[j];
            }
            else
            {
                j++;
                if(j>2)
                {
                    re++;
                    break;
                }

            }
        }
        if(num==1)
        {
            k++;
            re++;
        }
        j==0;
    }
    printf("%d",re);
}
