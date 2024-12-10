#include <stdio.h>

int main() {
    // Khai bao va tao bien kieu so nguyen 
    int a = 10;  // Kieu int là kieu so nguyen có the luu tru cac gia tri nhu -10, 0, 25,...

    // Khai bao va tao mot bien kieu float (so thuc)
    float b = 3.14f;  // Kieu float la kieu so thuc voi do chinh xac thâp, dung luu tru gia tri thap phan.

    // Khai bao va tao mot bien kieu double (so thuc voi do chinh xac cao)
    double c = 3.14159265359;  // Kieu double co do chinh xac cao hon float, dung de luu tru cac du lieu so thuc voi do chinh xac cao hon.

    // Khai bao va tao mot bien kieu char (ky tu)
    char d = 'A';  // Kieu char dung d? luu tru du lieu kieu ky tu, co the chua cac ky tu nhu 'A', 'b', '1', hoac cac ky tu dac biet.

    // Khai bao va tao mot bien kieu long (so nguyên dai)
    long e = 123456789L;  // Kieu long là mot kieu so nguyen dai, co the luu tru cac gia tri lon hon int.

    // Khai bao va tao mot bien kieu short (so nguyen ngan)
    short f = 32767;  // Kieu short là kieu so nguyen ngan, pham vi gia tri nho hon int.

    // Khai bao va tao mot bien kieu unsigned int (so nguyen khong dau)
    unsigned int g = 4000000000;  // Kieu unsigned int luu tru cac gia tri khong am,thuong dung khi khong luu tru gia tri am.

    // In ra cac gia tri cua bien 
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.10f\n", c);
    printf("d = %c\n", d);
    printf("e = %ld\n", e);
    printf("f = %d\n", f);
    printf("g = %u\n", g);
    return 0;
}

