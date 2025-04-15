#include <stdio.h>

long long giaithua(long long x) {
    if(x > 1)
    {
        return x * giaithua(x - 1);
    }
    else if(x==1)return x;
    else(printf("Syntax error!"));
}

int main() {
  long long x;
  printf("Nhap x: ");
  scanf("%lld", &x);
  printf("%lld! = %lld", x, giaithua(x));
  return 0;
}
