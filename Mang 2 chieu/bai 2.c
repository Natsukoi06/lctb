#include <stdio.h>
#define ROWS 100
#define COLS 100

void nhapMatrix(int a[][COLS], int m, int n)
{
    printf("Nhap ma tran: ");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void inMatrix(int a[][COLS], int m, int n)
{
    printf("Tong 2 ma tran la:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%2d  ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m, n;
    printf("Nhap kich co ma tran:");
    scanf("%d%d", &m, &n);
    if(m > ROWS || n > COLS)
    {
        printf("Kich thuoc khong hop le!");
        return 0;
    }

    int a[ROWS][COLS];
    nhapMatrix(a, m, n);

    int b[ROWS][COLS];
    nhapMatrix(b, m, n);

    int c[ROWS][COLS];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    inMatrix(c, m, n);

    return 0;
}
