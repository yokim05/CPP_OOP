#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class TugasSatu
{
public:
    int x;
    int y;
    int z;
    double phi;

    TugasSatu()
    {
        TugasSatu::x = 0;
        TugasSatu::y = 0;
        TugasSatu::z = 0;
        TugasSatu::phi = 3.14;
    }

    void menu()
    {
        cout << "Selamat Datang di program sederhana\n"
             << endl;
        cout << "1. Menghitung Luas persegi Panjang\n2. Menghitung Luas Segitiga\n3. Menghitung Volume Balok\n4. Menghitung Luas Lingkaran\n5. Menghitung Keliling lingkaran\n6. Menghitung Luas Prisma tegak segitiga" << endl;
        cout << "Silahkan Pilih Menu di atas : ";
    }

    double luas_persegi(double panjang, double lebar)
    {
        TugasSatu::y = panjang;
        TugasSatu::z = lebar;
        double hasil;

        hasil = TugasSatu::y * TugasSatu::z;
        return hasil;
    }

    double luas_segitiga(double alas, double tinggi)
    {
        TugasSatu::x = alas;
        TugasSatu::y = tinggi;
        double hasil;

        hasil = 0.5 * TugasSatu::x * TugasSatu::y;
        return hasil;
    }

    double volume_balok(double panjang, double lebar, double tinggi)
    {
        TugasSatu::x = panjang;
        TugasSatu::y = lebar;
        TugasSatu::z = tinggi;
        double hasil;

        hasil = TugasSatu::x * TugasSatu::y * TugasSatu::z;
        return hasil;
    }

    double luas_lingkaran(double jarijari)
    {
        TugasSatu::x = jarijari;
        double hasil;

        hasil = TugasSatu::phi * TugasSatu::x * TugasSatu::x;
        return hasil;
    }

    double keliling_lingkaran(double diameter)
    {
        TugasSatu::x = diameter;
        double hasil;

        hasil = TugasSatu::phi * TugasSatu::x;
        return hasil;
    }

    double luas_prisma_tegaksegitiga(double luas_alas, double keliling_alas, double tinggi_prisma)
    {
        TugasSatu::x = luas_alas;
        TugasSatu::y = keliling_alas;
        TugasSatu::z = tinggi_prisma;
        double hasil;

        hasil = (2 * TugasSatu::x) + (TugasSatu::y * TugasSatu::z);
        return hasil;
    }
};

int main(int argc, char const *argv[])
{

    TugasSatu tugassatu;
    int pilihan;
    double x, y, z;
    char lanjut;

    while (true)
    {
        system("cls");
        tugassatu.menu();
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            system("cls");
            cout << "Masukan Nilan Panjang: ";
            cin >> x;
            cout << "Masukan Nilan Lebar: ";
            cin >> y;
            cout << "Luas Persegi panjangnya adalah :" << tugassatu.luas_persegi(x, y) << endl;
            break;
        case 2:
            cout << "Masukan Nilan Alas: ";
            cin >> x;
            cout << "Masukan Nilan Tinggi: ";
            cin >> y;
            cout << "Luas Segitiganya adalah :" << tugassatu.luas_segitiga(x, y) << endl;
            break;
        case 3:
            cout << "masukan Nilai Panjang: ";
            cin >> x;
            cout << "masukan Nilai Lebar: ";
            cin >> y;
            cout << "masukan Nilai Tinggi: ";
            cin >> z;
            cout << "Volume Baloknya adalah :" << tugassatu.volume_balok(x, y, z) << endl;
            break;
        case 4:
            cout << "masukan Nilai Jari - Jari";
            cin >> x;
            cout << "Luas lingkarannya adalah :" << tugassatu.luas_lingkaran(x) << endl;
            break;
        case 5:
            cout << "Masukan Nilai diameternya: ";
            cin >> x;
            cout << "Keliling lingkaranya adalah :" << tugassatu.keliling_lingkaran(x) << endl;
            break;
        case 6:
            cout << "Masukan Nilai Luas alasnya: ";
            cin >> x;
            cout << "Masukan Nilai keliling alasnya: ";
            cin >> y;
            cout << "Masukan Nilai tinggi prisma: ";
            cin >> z;
            cout << "Luas prisma tegak segitiganya adalah :  :" << tugassatu.luas_prisma_tegaksegitiga(x, y, z) << endl;
            break;
        default:
            cout << "Menu yang dimaksud tidak ada !!";
            break;
        }

        cout << "Apakah anda ingin menghitung lagi? Y/N: ";
        cin >> lanjut;
        if (lanjut == 'Y' || lanjut == 'y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}
