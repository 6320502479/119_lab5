#include <stdio.h>
int main()
{
    int N,i[3]={2,3,5},j=2,k=1,l=0,re=2;
    scanf("%d",&N);
    j=re;
    while(j<N)
    {
        if(j%i[l]==0)
        {
            j/=i[l];
            while(j%i[l]==0)
            {
                j/=i[l];
            }
        }
        else
        {
            l++;

        }
        if(j==1)
        {
            re++;
            k++;
        }
        if(k==N)
            printf("%d",re);

    }
}
