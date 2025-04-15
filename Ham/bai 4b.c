#include <stdio.h>
#define MAX 100

void nhapMatrix(int a[MAX][MAX], int n, int m)
{
    printf("Nhap ma tran:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
}

void inMatrix(int a[][MAX], int n, int p)
{
    printf("Tich 2 ma tran A va B la:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            printf("%4d  ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, m, p;
    printf("Tinh tich 2 ma tran Anxm va Bmxp!\n");
    printf("Nhap cac kich thuoc n, m, p: ");
    scanf("%d%d%d", &n, &m, &p);

    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];

    nhapMatrix(a, n, m);
    nhapMatrix(b, m, p);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for(int k = 0; k < m; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }

inMatrix(c, n, p);

    return 0;
}
