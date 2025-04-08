#include <stdio.h>
#define LEN_A 1000

void doiCho(int a[], int i, int j)
{
    int temp = a[j];
    a[j] = a[i];
    a[i] = temp;
}

void nhapMang(int a[], int n)
{
    printf("Nhap mang can duoc sap xep: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n)
{
    int i;
    printf("Mang sau khi sap xep la: ");
    for(i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
}

void sapXepChon(int a[], int n)
{
    int i, j, imin;
    for(i = 0; i<n-1; i++)
    {
        imin = i;
        for(j = i+1; j<n; j++)
        {
            if(a[j] < a[imin])
            {
                imin = j;
            }
        }
        if(imin != i)
        {
            doiCho(a, i, imin);
        }
    }
}

int main()
{
   // freopen("D:\\cykablry\\input.txt", "r", stdin);
    int a[LEN_A];
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    nhapMang(a, n);
    sapXepChon(a, n);
    xuatMang(a, n);

    return 0;
}
