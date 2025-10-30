#include <stdio.h> 

int main() {
    int n, dao = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    while (n != 0) {
        dao = dao * 10 + n % 10;
        n = n / 10;
    }
    printf("So dao nguoc la: %d", dao);
    return 0;
}

