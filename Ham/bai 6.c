#include <stdio.h>

void inp(int n, int tmp[100]) {
    for(int i = 1; i <= n; i++)
        scanf("%d", &tmp[i]);
}

void out(int n, int tmp[100]) {
    for(int i = 1; i <= n; i++) 
        printf("%d ", tmp[i]);
}

long long poww(int x, int y) {
    long long res = 1;
    for(int i = 0; i < y; i++) 
        res *= x;
    
    return res;
}

long long calc(int n, int x, int tmp[100]) {
    long long res = tmp[1];
    for(int i = 2; i < n; i++) 
        res += (tmp[i] * poww(x, i - 1));

    return res;
}

void sum(int n, int a[100], int b[100], int s[100]) {
    for(int i = 1; i <= n; i++)
        s[i] = a[i] + b[i];
}

int main() {
    int n, x;
    int a[100], b[100], t[100];
    printf("Nhap so phan tu da thuc: "); scanf("%d", &n);
    printf("Nhap x: "); scanf("%d", &x);

    printf("Nhap he so da thuc 1: ");
    inp(n, a);

    printf("Nhap he so da thuc 2: ");
    inp(n, b);

    sum(n, a, b, t);

    printf("\nHe so da thuc 1: ");
    out(n, a);
    printf("\nHe so da thuc 2: ");
    out(n, b);
    printf("\nHe so cua da thuc tong la: ");
    out(n, t);

    printf("\nGia tri da thuc 1: %d",  calc(n, x, a));
    printf("\nGia tri da thuc 2: %d", calc(n, x, b));
    printf("\nGia tri cua da thuc tong la: %d", calc(n, x, t));
}
