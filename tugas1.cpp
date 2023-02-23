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

    int luas_persegi(int luas, int panjang, int lebar)
    {
        TugasSatu::x = luas;
        TugasSatu::y = panjang;
        TugasSatu::z = lebar;
        int hasil;

        hasil = TugasSatu::x * TugasSatu::y * TugasSatu::z;
        return hasil;
    }

    double luas_segitiga(int alas, int tinggi)
    {
        TugasSatu::x = alas;
        TugasSatu::y = tinggi;
        double hasil;

        hasil = 0.5 * alas * tinggi;
        return hasil;
    }
};

int main(int argc, char const *argv[])
{

    TugasSatu tugassatu;
    int pilihan, x, y, z;
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
            cout << "Masukan Nilai Tinggi: ";
            cin >> z;
            cout << "Luas Persegi panjangnya adalah :" << tugassatu.luas_persegi(x, y, z) << endl;
            break;
        case 2:
            cout << "Masukan Nilan Alas: ";
            cin >> x;
            cout << "Masukan Nilan Tinggi: ";
            cin >> y;
            cout << "Luas Segitiganya adalah :" << tugassatu.luas_segitiga(x, y) << endl;

            break;
        default:
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
