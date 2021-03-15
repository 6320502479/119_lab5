#include <stdio.h>
int main()
{
    int base,r,s,i;
    char cha;
    printf("Enter base:");
    scanf("%d",&base);
    if(base>=4&&base<=15)
    {
        fflush(stdin);
        printf("Enter char:");
        scanf("%c",&cha);
        for(r=1;r<base;r++)
        {
            for(s=0;s<base-r;s++)
            {
                printf(" ");
            }
            for(i=0;i<base;i++)
            {
                if(r==1||i==0||i==base-1)
                {
                    printf("o");
                }
                else
                {
                    for(s=1;s<=(base-4)+r*2;s++)
                        printf("%c",cha);
                        i=base-2;
                }
            }
            printf("\n");
        }

    }
    else
    {
        //printf();
    }
}
