#include <stdio.h>

double power(double x, int y) {
    if (y == 0) {
        return 1;
    }
    if (y < 0) {
        return 1 / power(x, -y);
    }
    return x * power(x, y - 1);
}

int main() {
    double x;
    int y;

    printf("Nhap x: ");
    scanf("%lf", &x);
    printf("Nhap y: ");
    scanf("%d", &y);

    printf("%.2lf^%d = %.4lf\n", x, y, power(x, y));

    return 0;
}

