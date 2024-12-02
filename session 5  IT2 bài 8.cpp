#include <stdio.h>


int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
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
        int result = bcnn(num1, num2);
        printf("BCNN cua %d va %d la: %d\n", num1, num2, result);
    }

    return 0;
}

