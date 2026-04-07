// NIM - Grace Lusyanna Marpaung
// NIM - Name

#include <stdio.h>

int main(int _argv, char **_argc)
{
    int level;

    // Membaca input level menu (1-5)
    if (scanf("%d", &level) != 1) {
        return 0;
    }

    // Bagian 1: Menampilkan daftar makanan berdasarkan level
    // Menggunakan switch tanpa break agar output menumpuk (fall-through)
    switch (level) {
        case 5:
            printf("milk\n");
        case 4:
            printf("fruits\n");
        case 3:
            printf("vegetables\n");
        case 2:
            printf("side dishes\n");
        case 1:
            printf("staple food\n");
            break;
    }

    // Bagian 2: Menampilkan kesimpulan berdasarkan level
    switch (level) {
        case 1:
            printf("you need side dishes\n");
            break;
        case 2:
            printf("you need vegetables\n");
            break;
        case 3:
            printf("good\n");
            break;
        case 4:
            printf("very good\n");
            break;
        case 5:
            printf("perfect\n");
            break;
    }

    return 0;
}