#include <stdio.h>

int main()
{
    //Truong hop 1
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Ma tran da khai bao gia tri la:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Truong hop 2
    int b[3][3];
    printf("Nhap ma tran kich co 3x3:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Ma tran sau khi nhap la\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
