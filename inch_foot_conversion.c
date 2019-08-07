#include<stdio.h>
int main()
{
    struct convert
    {
        int inch;
        int foot;
    }L1,L2,L3;
    printf("enter the length one in inch and foot terms\n");
    scanf("%d%d",&L1.inch,&L1.foot);
    printf("enter the length two in inch and foot terms\n");
    scanf("%d%d",&L2.inch,&L2.foot);
    L3.inch = L1.inch + L2.inch;
    L3.foot = L1.foot + L2.foot;
    int qut,rem;
    qut = L3.inch % 12;
    rem = L3.inch / 12;
    printf("final length is %d feet %d inch\n",L3.foot+rem,qut);
    return 0;
}