#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, count = 0, tong = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    temp = n;
    int m = n;
    while (m != 0) {
        count++;
        m /= 10;
    }
    temp = n;
    while (temp != 0) {
        int chuSo = temp % 10;
        tong += pow(chuSo, count);
        temp /= 10;
    }
    if (tong == n)
        printf("%d la so Armstrong.\n", n);
    else
        printf("%d khong phai la so Armstrong.\n", n);
    return 0;
}

