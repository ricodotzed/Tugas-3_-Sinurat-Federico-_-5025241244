#include <stdio.h>
#include <math.h>

int main() {
  
    double derajat, angka, tebakan_awal;
    double toleransi = 0.000001;
    double sekarang, berikutnya;
    
    printf("Masukkan derajat akar: ");
    scanf("%lf", &derajat);
    printf("Masukkan angka: ");
    scanf("%lf", &angka);
    printf("Masukkan tebakan awal: ");
    scanf("%lf", &tebakan_awal);

    sekarang = tebakan_awal;

    for (int i = 0; i < 100; i++) {

        double nilai_f = pow(sekarang, derajat) - angka;
        double turunan_f = derajat * pow(sekarang, derajat - 1);

        berikutnya = sekarang - (nilai_f / turunan_f);

        if (fabs(berikutnya - sekarang) < toleransi) {
            break;
        }

        sekarang = berikutnya;
    }

    printf("Akar dari %.lf | %.lf adalah: %.6lf\n", derajat, angka, berikutnya);

    return 0;
}
