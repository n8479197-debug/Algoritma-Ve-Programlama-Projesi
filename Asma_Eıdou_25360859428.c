#include <stdio.h>
#include <math.h>

#define PLANET_COUNT 8

const char *planets[PLANET_COUNT] = {
    "Mercury", "Venus", "Earth", "Mars",
    "Jupiter", "Saturn", "Uranus", "Neptune"
};

double absVal(double x) {
    return (x < 0) ? -x : x;
}

/* 1- Serbest Dusme Deneyi */
void serbestDusme(double *g,char *isim) {
    double t;
    printf("Sn. %s, Zamani giriniz (s): ", isim);
    scanf("%lf", &t);
    t = absVal(t);

    for (int i = 0; i < PLANET_COUNT; i++) {
        double h = 0.5 * (*(g+i)) * t * t;
        printf("%s -> Alinan yol = %.2f m\n", (*(planets+i)), h);
    }
}

/* 2- Yukari Atis Deneyi */
void yukariAtis(double *g,char *isim) {
    double v0;
    printf("Sn. %s, Ilk hiz degerini giriniz (m/s): ", isim);
    scanf("%lf", &v0);
    v0 = absVal(v0);

    for (int i = 0; i < PLANET_COUNT; i++) {
        double hmax = (v0 * v0) / (2 * (*(g+i)));
        printf("%s -> Maksimum yukseklik = %.2f m\n", (*(planets+i)), hmax);
    }
}

/* 3- Agirlik Deneyi */
void agirlikDeneyi(double *g,char *isim) {
    double m;
    printf("Sn. %s, Kutleyi giriniz (kg): ", isim);
    scanf("%lf", &m);
    m = absVal(m);

    for (int i = 0; i < PLANET_COUNT; i++) {
        double G = m * (*(g+i));
        printf("%s -> Agirlik = %.2f N\n", (*(planets+i)), G);
    }
}

/* 4- Potansiyel Enerji Deneyi */
void potansiyelEnerji(double *g,char *isim) {
    double m, h;
    printf("Sn. %s, Kutleyi giriniz (kg): ", isim);
    scanf("%lf", &m);
    printf("Sn %s, Yuksekligi giriniz (m): ", isim);
    scanf("%lf", &h);

    m = absVal(m);
    h = absVal(h);

    for (int i = 0; i < PLANET_COUNT; i++) {
        double Ep = m * (*(g+i)) * h;
        printf("%s -> Potansiyel Enerji = %.2f J\n", (*(planets+i)), Ep);
    }
}

/* 5- Hidrostatik Basinc Deneyi */
void hidrostatikBasinc(double *g,char *isim) {
    double rho, h;
    printf("Sn. %s, Sivi yogunlugunu giriniz (kg/m^3): ", isim);
    scanf("%lf", &rho);
    printf("Sn. %s, Derinligi giriniz (m): ", isim);
    scanf("%lf", &h);

    rho = absVal(rho);
    h = absVal(h);

    for (int i = 0; i < PLANET_COUNT; i++) {
        double P = rho * (*(g+i)) * h;
        printf("%s -> Basinc = %.2f Pa\n", (*(planets+i)), P);
    }
}

/* 6- Kaldirma Kuvveti Deneyi */
void kaldirmaKuvveti(double *g,char *isim) {
    double rho, V;
    printf("Sn. %s, Sivi yogunlugunu giriniz (kg/m^3): ", isim);
    scanf("%lf", &rho);
    printf("Sn. %s, Batan hacmi giriniz (m^3): ", isim);
    scanf("%lf", &V);

    rho = absVal(rho);
    V = absVal(V);

    for (int i = 0; i < PLANET_COUNT; i++) {
        double F = rho * (*(g+i)) * V;
        printf("%s -> Kaldirma Kuvveti = %.2f N\n", (*(planets+i)), F);
    }
}

/* 7- Basit Sarkac Deneyi */
void basitSarkac(double *g,char *isim) {
    double L;
    printf("Sn. %s, Ip uzunlugunu giriniz (m): ", isim);
    scanf("%lf", &L);
    L = absVal(L);

    for (int i = 0; i < PLANET_COUNT; i++) {
        double T = 2 * M_PI * sqrt(L / (*(g+i)));
        printf("%s -> Periyot = %.2f s\n", (*(planets+i)), T);
    }
}

/* 8- Ip Gerilmesi Deneyi */
void ipGerilmesi(double *g,char *isim) {
    double m;
    printf("Sn. %s, Kutleyi giriniz (kg): ", isim);
    scanf("%lf", &m);
    m = absVal(m);

    for (int i = 0; i < PLANET_COUNT; i++) {
        double T = m * (*(g+i));
        printf("%s -> Ip Gerilmesi = %.2f N\n", (*(planets+i)), T);
    }
}

/* 9- Asansor Deneyi */
void asansorDeneyi(double *g,char *isim) {
    double m, a;
    int secim;

    printf("Sn. %s, Kutleyi giriniz (kg): ", isim);
    scanf("%lf", &m);
    printf("Sn. %s, Asansor ivmesini giriniz (m/s^2): ", isim);
    scanf("%lf", &a);
    printf("1-Yukari ivmeli | 2-Asagi ivmeli: ");
    scanf("%d", &secim);

    m = absVal(m);
    a = absVal(a);

    for (int i = 0; i < PLANET_COUNT; i++) {
        double N = (secim == 1)
            ? m * ((*(g+i)) + a)
            : m * ((*(g+i)) - a);

        if (N < 0)
            N = 0;

        printf("%s -> Hissedilen Agirlik = %.2f N\n", (*(planets+i)), N);
    }
}

/* MENU */
void menu() {
    printf("\n==== DENEY TABLOSU ====\n");
    printf("1- Serbest Dusme Deneyi\n");
    printf("2- Yukari Atis Deneyi\n");
    printf("3- Agirlik Deneyi\n");
    printf("4- Potansiyel Enerji Deneyi\n");
    printf("5- Hidrostatik Basinc Deneyi\n");
    printf("6- Kaldirma Kuvveti Deneyi\n");
    printf("7- Basit Sarkac Deneyi\n");
    printf("8- Ip Gerilmesi Deneyi\n");
    printf("9- Asansor Deneyi\n");
    printf("-1- Cikis\n");
    printf("Seciminiz: ");
}

int main() {

    double gravity[PLANET_COUNT] = {
        3.7, 8.87, 9.81, 3.71,
        24.79, 10.44, 8.69, 11.15
    };

    char isim[50];
    int choice;

    printf("Isminiz nedir?: ");
    scanf("%[^\n]s", isim);

    do {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1: serbestDusme(gravity,isim); break;
            case 2: yukariAtis(gravity,isim); break;
            case 3: agirlikDeneyi(gravity,isim); break;
            case 4: potansiyelEnerji(gravity,isim); break;
            case 5: hidrostatikBasinc(gravity,isim); break;
            case 6: kaldirmaKuvveti(gravity,isim); break;
            case 7: basitSarkac(gravity,isim); break;
            case 8: ipGerilmesi(gravity,isim); break;
            case 9: asansorDeneyi(gravity,isim); break;
            case -1:
                printf("Deneyiniz bitmistir, Iyi gunler!\n");
                break;
            default:
                printf("Gecersiz secim!\n");
        }

        if (choice != -1)
            printf("\nIsleminiz tamamlandi, yeni islemi secebilir misiniz?\n");

    } while (choice != -1);

    return 0;
}
