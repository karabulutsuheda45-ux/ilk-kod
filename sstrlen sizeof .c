#include <stdio.h>
#include <string.h>

int main() {

    // İngiliz alfabesi karakter dizisi
    char ingiliz_alfabesi[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // strlen() -> Dizideki karakter sayısını verir (null terminator hariç)
    // Örn: "ABC" -> strlen = 3
    printf("%d", strlen(ingiliz_alfabesi));
    printf("\n...\n");

    // sizeof() -> Dizinin bellekte kapladığı toplam byte sayısı
    // Null terminator dahil -> "ABC" -> sizeof = 4
    printf("%d", sizeof(ingiliz_alfabesi));
    printf("\n...........\n");

    // Türk alfabesi karakter dizisi
    char turk_alfabesi[] = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZ";

    // strlen() -> metnin içindeki karakter sayısı
    printf("%d", strlen(turk_alfabesi));
    printf("\n...\n");

    // sizeof() -> bellekteki toplam byte miktarı (null terminator dahil)
    printf("%d", sizeof(turk_alfabesi));
    printf("\n...........\n");

    // 50 karakterlik bir dizi tanımlandı, içine metin yazıldı
    char deneme[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // strlen() -> metindeki karakter sayısını ölçer
    printf("%d", strlen(deneme));
    printf("\n...\n");

    // sizeof() -> dizinin boyutunu verir, burada 50
    // Çünkü tanımlama: char deneme[50];
    printf("%d", sizeof(deneme));

    return 0;
}
