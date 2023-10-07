#include <stdio.h>

int main() {
    int apples = 5, bananas = 8;
    float orangeprice = 1.5, bananaprice = 0.75;
    char currency = '$';

    float totalcost = (apples * orangeprice) + (bananas * bananaprice);

    printf("jumlah apel: %d\n", apples);
    printf("jumlah pisang: %d\n", bananas);
    printf("Harga jeruk per buah: %.2f %c\n", orangeprice, currency);
    printf("Harga pisang per buah: %.2f %c\n", bananaprice, currency);
    printf("total biaya: %.2f %c\n", totalcost, currency);

    return 0;
}