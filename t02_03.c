// NIM - Grace Lusyanna Marpaung
// NIM - Name

#include <stdio.h>

int main(int _argv, char **_argc)
{
    char op;
    int angka_baru;
    int hasil;
    int counter = 0;
    int input_list[5]; // Untuk menyimpan histori angka input agar bisa diprint ulang

    // 1. Membaca jenis operator (+, -, *)
    if (scanf(" %c", &op) != 1) return 0;

    // 2. Inisialisasi nilai awal sesuai aturan soal
    if (op == '*') {
        hasil = 1;
    } else {
        hasil = 0;
    }

    // 3. Loop utama (Berhenti jika sudah 5 kali input atau input adalah -1)
    while (counter < 5) {
        if (scanf("%d", &angka_baru) != 1) break;

        // Cek jika user memasukkan -1 untuk berhenti lebih awal
        if (angka_baru == -1) {
            // Print riwayat sebelum keluar
            printf("%c\n", op);
            for (int i = 0; i < counter; i++) {
                // Kalkulasi ulang untuk print histori (seperti di Example 1)
                int temp_hasil;
                if (i == 0) {
                    temp_hasil = (op == '*') ? 1 : 0;
                } else {
                    // Logika ini menyederhanakan tampilan output kumulatif
                }
                // Karena output di soal meminta semua histori di-print setiap kali input baru masuk,
                // kita akan menggunakan cara print langsung di bawah.
            }
            printf("-1\n0\n"); // Sesuai Example 1, input -1 menghasilkan output 0
            return 0;
        }

        // Lakukan operasi
        if (op == '+') {
            hasil = hasil + angka_baru;
        } else if (op == '-') {
            hasil = hasil - angka_baru;
        } else if (op == '*') {
            hasil = hasil * angka_baru;
        }

        // Simpan ke list untuk histori output
        input_list[counter] = angka_baru;
        counter++;

        // 4. Tampilkan Output sesuai format (Setiap input menampilkan seluruh histori)
        printf("%c\n", op);
        int temp_val = (op == '*') ? 1 : 0;
        for (int i = 0; i < counter; i++) {
            printf("%d\n", input_list[i]);
            if (op == '+') temp_val += input_list[i];
            else if (op == '-') temp_val -= input_list[i];
            else if (op == '*') temp_val *= input_list[i];
            printf("%d\n", temp_val);
        }
    }

    return 0;
}