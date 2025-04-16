#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[100];
    int price;
    int quantity;
    int sum;
} Product;

void nhapHang(Product *product, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap thong tin san pham thu %d!\n", i+1);
        printf("Ten san pham: ");

        fgets(product[i].name, sizeof(product[i].name), stdin);
        product[i].name[strcspn(product[i].name, "\n")] = '\0';

        printf("Gia ca cua san pham: ");
        scanf("%d", &product[i].price);

        printf("So luong san pham: ");
        scanf("%d", &product[i].quantity);

        getchar();

        product[i].sum = product[i].price * product[i].quantity;
    }
}

void sapXep(Product *product, int n)
{
    Product temp;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(strcmp(product[i].name, product[j].name) > 0)
            {
                temp = product[i];
                product[i] = product[j];
                product[j] = temp;
            }
        }
    }
}

void xuatHang(Product *product, int n)
{
    int total = 0;
    printf("\t\t\t\tSO LIEU BAN HANG\n");
    printf("%-5s %-25s %-20s %-15s %-15s\n", "STT", "Ten hang", "Don gia", "So luong", "Thanh tien");

    for(int i = 0; i < n; i++)
    {
        printf("%-5d %-25s %-20d %-15d %-15d\n",
               i+1,
               product[i].name,
               product[i].price,
               product[i].quantity,
               product[i].sum);
        total += product[i].sum;
    }
    printf("\n");
    printf("%-5s %-25s %-20s %-15s %-15d", " ", " ", " ", "Tong tien:", total);
}

int main()
{
    int n;
    printf("Nhap so luong hang hoa: ");
    scanf("%d", &n);
    getchar();

    Product *product = (Product*)malloc(n * sizeof(Product));

    nhapHang(product, n);
    sapXep(product, n);
    xuatHang(product, n);

    free(product);
    return 0;
}

