#include <stdio.h>

double poww(double n, int m) {
    double s = 1;
    for(int i = 1; i <= m; i++) 
        s *= n;
    
    return s;
}

int main() {
    long long a, n;
    printf("Nhap so tien gui: "); scanf("%lld", &a);
    printf("Nhap so thang gui: "); scanf("%lld", &n);

    printf("So tien nhan duoc sau %d thang la %lf", n, a * poww((1 + (0.45 / 100)), n));
    
    return 0;
}
