// 12S25022 - Grace Lusyanna Marpaung
// NIM - Name

#include <stdio.h>

int main(int _argv, char **_argc)
{
    int jumlah_buku;
    double harga_per_buku, total_belanja, potongan = 0, total_bayar;

    // Membaca input jumlah dan harga
    if (scanf("%d %lf", &jumlah_buku, &harga_per_buku) != 2) {
        return 0;
    }

    // Menghitung total belanja awal
    total_belanja = (double)jumlah_buku * harga_per_buku;

    // Logika pengecekan diskon berdasarkan total belanja
    if (total_belanja > 500000) {
        potongan = total_belanja * 0.15; // Diskon 15%
    } else if (total_belanja >= 100000) {
        potongan = total_belanja * 0.10; // Diskon 10%
    } else if (total_belanja > 50000) {
        potongan = total_belanja * 0.05; // Diskon 5%
    } else {
        potongan = 0;
    }

    // Baris pertama: Tampilkan potongan harga dengan 2 desimal atau ---
    if (total_belanja > 50000) {
        printf("%.2f\n", potongan);
    } else {
        printf("---\n");
    }

    // Baris kedua: Total bayar setelah dipotong diskon
    total_bayar = total_belanja - potongan;
    printf("%.2f\n", total_bayar);

    return 0;
}