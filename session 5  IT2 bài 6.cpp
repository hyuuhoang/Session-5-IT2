#include <stdio.h>

int main() {
    float num1, num2;
    int choice;

    do {
        // Nh?p hai s?
        printf("Nhap hai so: \n");
        printf("So 1: ");
        scanf("%f", &num1);
        printf("So 2: ");
        scanf("%f", &num2);

        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Tong cua %.2f va %.2f la: %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu cua %.2f va %.2f la: %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Tich cua %.2f va %.2f la: %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong cua %.2f va %.2f la: %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("Loi: Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }

    } while (choice != 5);

    return 0;
}

