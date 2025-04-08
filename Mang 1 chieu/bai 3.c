#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000];
    int n;
    int sum = 0;
    int sum_duong = 0, sum_am = 0;
    int count_duong = 0, count_am = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        sum += a[i];

        if(a[i] > 0)
        {
            sum_duong += a[i];
            count_duong++;
        }
        else if(a[i] < 0)
        {
            sum_am += a[i];
            count_am++;
        }
    }
    double avg = (double)sum / n;
    double avg_duong = (count_duong > 0) ? (double)sum_duong / count_duong : 0;
    double avg_am = (count_am > 0) ? (double)sum_am / count_am : 0;

    printf("Tong cua cac so trong mang la: %d\n", sum);
    printf("Tong cua cac so nguyen duong la: %d\n", sum_duong);
    printf("Tong cua cac so nguyen am la: %d\n", sum_am);
    printf("Trung binh cong cua cac so trong mang la: %f\n", avg);
    printf("Trung binh cong cua cac so nguyen duong la: %f\n", avg_duong);
    printf("Trung binh cong cua cac so nguyen am la: %f\n", avg_am);

    return 0;
}
