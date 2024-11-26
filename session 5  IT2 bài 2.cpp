#include<stdio.h>

int main() {
    int soChoTruoc = 15, soNguoiDungNhap;

    do {
        printf("Nhap mot so: ");
        scanf("%d", &soNguoiDungNhap);
    } while (soNguoiDungNhap != soChoTruoc);

    printf("Ban da nhap dung so %d!\n", soChoTruoc);
    return 0;
}

