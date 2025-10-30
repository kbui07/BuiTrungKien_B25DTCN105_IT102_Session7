#include <stdio.h>

int main() {
    int n, x, dem = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    printf("Nhap chu so x (0-9): ");
    scanf("%d", &x);
    if (n < 0) n = -n;
    if (n == 0 && x == 0) {
        dem = 1;
    } else {
        while (n > 0) {
            int chuSo = n % 10;
            if (chuSo == x) dem++;
            n /= 10;
        }
    }
    printf("Chu so %d xuat hien %d lan trong so n.\n", x, dem);
    return 0;
}

