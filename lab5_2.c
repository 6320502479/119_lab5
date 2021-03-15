#include <stdio.h>
int main()
{
    int i,n,s,j,space,mid;
    scanf("%d",&n);
    if(n%2==0)
    {
        s=(n/2)-1;
        space=n-1;
    }
    else
    {
        s=n/2;
        space=n;
        mid=(n/2)+1;
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<s-i;j++)
      {
           printf("_");

      }
        printf("*");
        printf("\n");
    }

}
