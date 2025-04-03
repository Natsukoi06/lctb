#include <stdio.h>
#include <math.h>
int main()
{
 double dtb;
 printf("Nhap diem trung binh: ");
 scanf("%lf", &dtb);
 if(dtb < 5) printf("Yeu");
 else if(5 <= dtb && dtb < 7) printf("Tb");
 else if(7<= dtb && dtb < 8) printf("Kha");
 else if(8 <= dtb && dtb < 9) printf("Gioi");
 else if(dtb > 9) printf("Xuat xac");
 return 0;
}

