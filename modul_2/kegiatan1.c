#include <stdio.h>

int main() {
 
   float nilai_matematika, nilai_fisika, nilai_biologi;
   int bobot_matematika = 4, bobot_fisika = 3, bobot_biologi =2;
   float total_nilai, rata_rata;

   printf("Masukkan nilai matematika: ");
   scanf("%f", &nilai_matematika);
   printf("Masukkan nilai fisika: ");
   scanf("%f", &nilai_fisika);
   printf("Masukkan nilai biologi: ");
   scanf("%f", &nilai_biologi);

   total_nilai = (nilai_matematika * bobot_matematika) + (nilai_fisika * bobot_fisika) + (nilai_biologi * bobot_biologi);
   int total_bobot = bobot_matematika + bobot_fisika + bobot_biologi;
   rata_rata = total_nilai / total_bobot;
   printf("Nilai rata-rata: %.2f\n", rata_rata);

   return 0;
}
