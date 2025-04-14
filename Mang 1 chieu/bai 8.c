#include <stdio.h>
#define LEN 100

void nhapMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int main()
{
    int a[LEN];
    int b[LEN];
    int c[LEN];

    int n;
    scanf("%d", &n);
    nhapMang(a, n);
    int m;
    scanf("%d", &m);
    nhapMang(b, m);

    int i = 0, j = 0, res = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            if (res == 0 || c[res-1] != a[i])
                c[res++] = a[i];
            i++;
        }
        else if (a[i] > b[j])
        {
            if (res == 0 || c[res-1] != b[j])
                c[res++] = b[j];
            j++;
        }
        else
        {
            if (res == 0 || c[res-1] != a[i])
                c[res++] = a[i];
            i++;
            j++;
        }
    }
    while (i < n)
    {
        if (res == 0 || c[res-1] != a[i])
            c[res++] = a[i];
        i++;
    }
    while (j < m)
    {
        if (res == 0 || c[res-1] != b[j])
            c[res++] = b[j];
        j++;
    }


    printf("Mang sau khi da ket hop la: ");
    for(int i = 0; i < res; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
