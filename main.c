//6-bit Kodlama Sistemi ile Karakter Tabanli Toplama Uygulamasi

#include <stdio.h>   // printf, scanf fonksiyonlari icin gerekli kutuphane
#include <ctype.h>   // isdigit() fonksiyonu icin gerekli kutuphane

//Binary yazdırmak icin void fonksiyonu eklendi
void print_binary(unsigned char value, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (value >> i) & 1);
    }
}

int main() {
    char c1, c2;  // Kullanicidan alinacak iki karakteri tutacak degiskenler
    printf("6-Bit Karakter Tabanli Toplama Uygulamasi\n\n");
    // Ilk rakami kullanicidan al
    printf("Ilk rakami gir: ");
    scanf(" %c", &c1);  

    // Ikinci rakami kullanicidan al
    printf("Ikinci rakami gir: ");
    scanf(" %c", &c2);

    //  Girilen karakterlerin her ikisi de rakam mi kontrol et
    if (isdigit(c1) && isdigit(c2)) {

        // Karakterleri gercek rakam degerlerine cevir 
        char rakam1 = c1 -'0';
        char rakam2 = c2 -'0';
        char rakam_toplam =(rakam1+rakam2)& 0b111111;; //(0b111111)6-bit sınırı uygulanarak overflow davranışı simüle edildi
        char ascii_deger = rakam_toplam +'0';

        //  Eger iki rakamin toplami tek haneden (9'dan) buyukse hata ver
        if (rakam_toplam > 9) {
            printf("HATA: Rakam toplami tek haneyi gecti! (%d + %d = %d)\n",
                   rakam1, rakam2, rakam_toplam);
        } else {
            //  Her sey dogruysa bilgileri goster
            printf("\n--- Girilen Veriler ---\n");

            // 1. rakamin ASCII ve binary gosterimi
            printf("1. rakam: '%d' ASCII=%d Binary=", rakam1, c1);
            print_binary(rakam1,6);

            // 2. rakamin ASCII ve binary gosterimi
            printf("\n2. rakam: '%d' ASCII=%d Binary=", rakam2, c2);
		    print_binary(rakam2,6);

            // Toplamin Rakam , ASCII ve Binary karsiligi
            printf("\n\nToplam=%d ASCII=%d Binary=", rakam_toplam , ascii_deger);
		    print_binary(rakam_toplam,6);

            printf("\n");
          
            //  6-bit ve 8-bit sistemlerin maksimum degerlerini hesapla
            int max6 = (1 << 6) - 1; // 6-bit max = 2^6 - 1 = 63
            int max8 = (1 << 8) - 1; // 8-bit max = 2^8 - 1 = 255

             // 8-bit maksimum degerin binary gosterimi
            printf("\n8-bit [0-255] , Binary: ");
            print_binary(max8,8);

            // 6-bit maksimum degerin binary gosterimi
            printf("\n6-bit [0-63] , Binary: ");
            print_binary(max6,6);

            //  ASCII toplaminin 6-bit'e sigip sigmadigini kontrol et
            if (rakam_toplam > max6) {
                printf("\nRakam (%d), 6-bit'e sigmaz, sadece 8-bit'e sigar.\n", rakam_toplam);
            } else {
                printf("\nRakam (%d), 6-bit'e sigar.\n",rakam_toplam);
            }
            printf("\n");
           
        }
    }
    else {
        // Kullanici rakam disinda bir karakter girerse hata mesaji ver
        printf("HATA: Sadece rakam girilebilir!\n");
    }
    getchar();//Ilk getchar() onceki giristen kalan '\n' karakterini tuketir
    getchar();// Ikinci getchar() ise kullanicidan yeni bir karakter girmesini bekler
    

   
    return 0; // Programi basarili sekilde sonlandirir
}
