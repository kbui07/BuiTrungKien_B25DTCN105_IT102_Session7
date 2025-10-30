#include <stdio.h>

int main() {
	int m,n,i,j;
	printf("Nhap chieu dai va chieu rong (m,n): ");
	scanf("%d %d",&m, &n);
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
