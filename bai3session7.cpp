#include <stdio.h>

int main() {
	int number,reverse=0,char_n,origin=number;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&number);
	while (number > 0) {
		char_n=number%10;
		reverse=reverse*10+char_n;
	    number=number/10;
	}
	if (reverse==origin) {
		printf("%d la so doi xung",origin);	
	}else {
		printf("khong doi xung");
	}
	return 0;
}
