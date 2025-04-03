#include <stdio.h>
#include <math.h>
int main()
{
    int dd, mm, yy;
    printf("Nhap thang nam: ");
    scanf("%d%d", &mm, &yy);
    int nhuan = ((yy % 400 == 0) || (yy % 4 == 0 && yy % 100 != 0));
    switch(mm)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        dd = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        dd = 30;
        break;
    case 2:
        if(nhuan) dd = 29;
        else dd = 28;
        break;
    }

    printf("Thang %d nam %d co %d ngay", mm, yy, dd);

    return 0;
}

