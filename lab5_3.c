#include <stdio.h>
int main()
{
    int N,i[3]={2,3,5},k=1,num,j=0,re=1;
    scanf("%d",&N);
    num=re;
    while(k!=N)
    {
        printf("%d %d \n",num,re);
       while(num!=1)
        {
            if(j>2)
                {
                    num++;
                    j==0;
                }
            if(num%i[j]==0)
            {
                num/=i[j];
            }
            else
                j++;
        }
        if(num==1)
        {
            k++;
            re++;
            num=re;
        }
        j==0;

    }
    printf("%d",re);
}
