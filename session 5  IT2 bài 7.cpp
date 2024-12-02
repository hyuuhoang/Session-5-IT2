#include <stdio.h>


int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Nhap vao hai so nguyen duong:\n");
    printf("So 1: ");
    scanf("%d", &num1);
    printf("So 2: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Vui long nhap hai so nguyen duong.\n");
    } else {
        int result = ucln(num1, num2);
        printf("UCLN cua %d va %d la: %d\n", num1, num2, result);
    }

    return 0;
}


