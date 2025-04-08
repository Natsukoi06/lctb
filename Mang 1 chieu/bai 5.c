#include <stdio.h>
#include <stdlib.h>

int main()
{
   // freopen("D:\\cykablry\\input.txt", "r", stdin);
    int a[500], m, n, i, j=0;
    scanf("%d", &m);
    for(i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    for(i=0; i < m; i++)
    {
        if (a[i] == n)
        {
            j++;
        }
    }
    if(j==0)
    {
        printf("Phan tu %d khong xuat hien trong mang", n);
    }
    else
    {
        printf("Phan tu %d xuat hien %d lan trong mang\n", n, j);
    }


    return 0;
}
