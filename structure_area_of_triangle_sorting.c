#include<stdio.h>
#include<math.h>

void sort_array(int *arr, int n)
{
      for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

int main()
{
    struct triangle
    {
        int a;
        int b;
        int c;
        float s[10];
    };
    struct triangle tri[100];
    int n;
    float area;
    printf("enter the no of triangles\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("enter the sides of triangle\n");
        scanf("%d%d%d",&tri[i].a,&tri[i].b,&tri[i].c);
        tri[i].s[i] = (tri[i].a + tri[i].b + tri[i].c)/2;
       // area = sqrt(s*(s-tri[i].a)*(s-tri[i].b)*(s-tri[i].c));
        printf("%f\n",tri[i].s[i]);
    }
    printf("semi perimeter for given triangles are\n");
    for(int i=0; i<n; i++)
    {
        printf("%f\n",tri[i].s[i]);
    }
    sort_array(&tri->s[0],n);
    printf("sorted semi perimeter are \n");
    for(int i=0; i<n; i++)
    {
        printf("%f\n",tri[i].s[i]);
    }
    printf("\n");
    return 0;
}