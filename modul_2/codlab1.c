#include <stdio.h>

void main() {
    // SJ_1 = Sapi Jantan 1   SB_1 = Sapi Betina 1
    // SJ_2 = Sapi Jantan 2   SB_2 = Sapi Betina 2
    // KJ_1 = Kambing Jantan 1  KB_1 = Kambing Bentina 1
    // KJ_2 = Kambing Jantan 2

    float SJ_1,SJ_2,SB_1,SB_2;
    const float KJ_1 = 120, KJ_2 = 85.8, KB_1 = 23;

    printf("masukkan nilai SJ 1: ");
    scanf("%f", &SJ_1);
    printf("masukkan nilai SJ 2: ");
    scanf("%f", &SJ_2);
    printf("masukkan nilai SB 1: ");
    scanf("%f", &SB_1);
    printf("masukkan nilai SB 2: ");
    scanf("%f", &SB_2);

    printf("Hasil Berat Sapi: %.2f\n", SJ_1 + SJ_2 + SB_1 + SB_2);
    printf("Hasil Berat Kambing: %.2f", KJ_1 + KJ_2 + KB_1);
    
   


}