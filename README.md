# Algoritma-Ve-Programlama-Projesi
Kodun Amacı
Bu kod, C programlama dili kullanılarak yazılmış menü tabanlı bir fizik deneyleri simülasyon programıdır. Programın amacı, farklı gezegenlerdeki yerçekimi ivmesine bağlı olarak çeşitli fizik deneylerini hesaplamak ve karşılaştırmaktır. Kullanıcıdan alınan fiziksel değerler kullanılarak, sonuçlar 8 farklı gezegen için ayrı ayrı hesaplanır.
Kullanılan Kütüphaneler
Kodda iki temel kütüphane kullanılmıştır:
stdio.h
Kullanıcıdan veri almak (scanf) ve ekrana çıktı vermek (printf) için kullanılmıştır.
math.h
Matematiksel işlemler için kullanılmıştır.
Özellikle:
sqrt() → karekök hesaplamak için
M_PI → π (pi) sabiti, basit sarkaç periyodu hesabında kullanılmıştır.
Sabitler ve Diziler
PLANET_COUNT sabiti, gezegen sayısını (8) belirtmek için tanımlanmıştır.
planets[] dizisi, gezegen isimlerini tutar.
gravity[] dizisi, her gezegenin yerçekimi ivmesini (m/s²) saklar.
Bu diziler sayesinde hesaplamalar döngülerle tüm gezegenler için kolayca yapılmaktadır.
Yardımcı Fonksiyon
absVal()
Kullanıcının negatif değer girmesi durumunda, fiziksel olarak anlamlı sonuçlar elde etmek için mutlak değer almaktadır.
Fonksiyonların Çalışma Mantığı
Programda her fizik deneyi ayrı bir fonksiyon olarak yazılmıştır.
Tüm fonksiyonlar:
Yerçekimi dizisini (double *g)
Kullanıcı adını (char *isim) parametre olarak alır.
Fonksiyonlar içinde:
Kullanıcıdan gerekli değerler alınır
Girilen değerlerin mutlak değeri alınır
for döngüsü ile tüm gezegenler için hesaplama yapılır
Sonuçlar gezegen ismi ile birlikte ekrana yazdırılır
Deneylerin Açıklaması
Serbest Düşme Deneyi
Girilen zamana göre cismin aldığı yol hesaplanır.
Yukarı Atış Deneyi
Cismin ulaşabileceği maksimum yükseklik hesaplanır.
Ağırlık Deneyi
Cismin her gezegendeki ağırlığı hesaplanır.
Potansiyel Enerji Deneyi
Cismin yerçekimi potansiyel enerjisi hesaplanır.
Hidrostatik Basınç Deneyi
Sıvı içindeki basınç değeri hesaplanır.
Kaldırma Kuvveti Deneyi
Arşimet prensibine göre kaldırma kuvveti hesaplanır.
Basit Sarkaç Deneyi
Sarkaç periyodu, gezegenlerin yerçekimi ivmesine göre hesaplanır.
İp Gerilmesi Deneyi
Asılı cismin ipte oluşturduğu gerilme kuvveti hesaplanır.
Asansör Deneyi
Asansör yukarı veya aşağı ivmeli hareket ettiğinde hissedilen ağırlık hesaplanır.
Menü Yapısı
Program, switch-case yapısı ile çalışan bir menüye sahiptir.
Kullanıcı menüden deney numarasını seçer ve ilgili fonksiyon çağrılır.
Kullanıcı -1 seçeneğini girene kadar program çalışmaya devam eder.
Programın Genel Özellikleri
Menü tabanlıdır
Fonksiyonel ve düzenli yapıdadır
Pointer (işaretçi) kullanımı mevcuttur
Negatif değer girişlerine karşı kontrol yapılmıştır
Kullanıcı adı alınarak etkileşim artırılmıştır
Sonuç
Bu program sayesinde kullanıcı, aynı fiziksel büyüklüklerin farklı gezegenlerde nasıl değiştiğini gözlemleyebilir. Proje, hem C programlama dili becerilerini geliştirmekte hem de fizik derslerinde öğrenilen temel kavramların uygulamalı olarak anlaşılmasını sağlamaktadır.
