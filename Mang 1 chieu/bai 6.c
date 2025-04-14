#include <stdio.h>
#include <stdlib.h>

int main()
{
   // freopen("D:\\cykablry\\input.txt", "r", stdin);
    int a[1000];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            a[i] = 0;
        }
        printf("%d ", a[i]);
    }
    return 0;
}
