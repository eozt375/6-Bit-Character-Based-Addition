# 6-Bit-Character-Based-Addition

Bu C programı, Unix öncesi sistemlerdeki sınırlı I/O ortamını simüle ederek iki tek haneli rakamın karakter tabanlı toplamasını gerçekleştirir. Program, kullanıcıdan ASCII karakterleri olarak alınan rakamları işleyerek 6-bit ve 8-bit sayı sistemleri bağlamında toplamı ve binary karşılıklarını gösterir.

Özellikler:

Kullanıcıdan iki tek haneli rakam ASCII karakter olarak alınır.

Karakterlerin rakam olup olmadığı kontrol edilir.

Girilen rakamlar gerçek sayısal değerlerine çevrilir ve 6-bit sınırı uygulanarak overflow simülasyonu yapılır.

Toplam, ASCII ve binary formatında kullanıcıya gösterilir.

6-bit ve 8-bit maksimum değerler binary olarak karşılaştırılır.

Hatalı girişlerde (rakam dışında karakter veya toplamın tek haneyi aşması) kullanıcı bilgilendirilir.

Kullanım Örneği:

Program çalıştırılır.

Kullanıcı iki rakam girer.

Program, girilen rakamların ve toplamının ASCII ve binary gösterimlerini ekrana yazdırır.

6-bit ve 8-bit sınırları hakkında bilgi verir.

Notlar:

print_binary() fonksiyonu, herhangi bir sayı değerini istenen bit sayısı kadar binary olarak yazdırmak için eklenmiştir.

Program, C standart kütüphaneleri <stdio.h> ve <ctype.h> kullanılarak geliştirilmiştir.
print_binary() fonksiyonu, herhangi bir sayı değerini istenen bit sayısı kadar binary olarak yazdırmak için eklenmiştir.

Program, C standart kütüphaneleri <stdio.h> ve <ctype.h> kullanılarak geliştirilmiştir.
