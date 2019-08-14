#include<stdio.h>
int main()
{
    struct calcy
    {
        int n;
        int k;
    };
    struct calcy s[100];
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d   %d",&s[i].n,&s[i].k);
    }
    for(int i=0;i<t;i++)
    {
        if(s[i].k == 1)
        {
            printf("NO\n");
        }
        else if(s[i].k == s[i].n/2)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        
    }
    return 0;
}