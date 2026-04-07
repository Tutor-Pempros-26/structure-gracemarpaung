// 12S25021 - Gabriel Ignasius Sinaga
#include <stdio.h>

struct InfoGizi {
    int level;
    char *kesimpulan;
};

int main(int _argv, char **_argc)
{
    struct InfoGizi gizi;
    
    scanf("%d", &gizi.level);
    
    if (gizi.level == 5) {
        gizi.kesimpulan = "perfect";
    } else if (gizi.level == 4) {
        gizi.kesimpulan = "very good";
    } else if (gizi.level == 3) {
        gizi.kesimpulan = "good";
    } else if (gizi.level == 2) {
        gizi.kesimpulan = "you need vegetables";
    } else if (gizi.level == 1) {
        gizi.kesimpulan = "you need side dishes";
    }

    if (gizi.level >= 5) {
        printf("milk\n");
    }
    if (gizi.level >= 4) {
        printf("fruits\n");
    }
    if (gizi.level >= 3) {
        printf("vegetables\n");
    }
    if (gizi.level >= 2) {
        printf("side dishes\n");
    }
    if (gizi.level >= 1) {
        printf("staple food\n");
    }
    
    printf("%s\n", gizi.kesimpulan);

    return 0;
}