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

    TugasSatu(double x = 0, double y = 0, double z = 0)
    {
        TugasSatu::x = x;
        TugasSatu::y = y;
        TugasSatu::z = z;
        TugasSatu::phi = 3.14;
    }

    void menu()
    {
        cout << "Selamat Datang di program sederhana\n"
             << endl;
        cout << "1. Menghitung Luas persegi Panjang\n2. Menghitung Luas Segitiga\n3. Menghitung Volume Balok\n4. Menghitung Luas Lingkaran\n5. Menghitung Keliling lingkaran\n6. Menghitung Luas Prisma tegak segitiga" << endl;
        cout << "Silahkan Pilih Menu di atas : ";
    }

    double luas_persegi()
    {
        return TugasSatu::x * TugasSatu::y;
    }

    double luas_segitiga()
    {
        return 0.5 * TugasSatu::x * TugasSatu::y;
    }

    double volume_balok()
    {
        return TugasSatu::x * TugasSatu::y * TugasSatu::z;
    }

    double luas_lingkaran()
    {
        return TugasSatu::phi * TugasSatu::x * TugasSatu::x;
    }

    double keliling_lingkaran()
    {
        return TugasSatu::phi * TugasSatu::x;
    }

    double luas_prisma_tegaksegitiga()
    {
        return (2 * TugasSatu::x) + (TugasSatu::y * TugasSatu::z);
    }
};

int main(int argc, char const *argv[])
{

    TugasSatu menu;
    int pilihan;
    double x, y, z;
    char lanjut;

    while (true)
    {
        system("cls");
        menu.menu();
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
        {

            system("cls");
            cout << "Masukan Nilai Panjang: ";
            cin >> x;
            cout << "Masukan Nilai Lebar: ";
            cin >> y;
            TugasSatu tugassatu = TugasSatu(x, y);
            cout
                << "Luas Persegi panjangnya adalah :" << tugassatu.luas_persegi() << endl;
            break;
        }
        case 2:
        {
            system("cls");

            cout << "Masukan Nilai Alas: ";
            cin >> x;
            cout << "Masukan Nilai Tinggi: ";
            cin >> y;
            TugasSatu tugassatu = TugasSatu(x, y);
            cout << "Luas Segitiganya adalah :" << tugassatu.luas_segitiga() << endl;
            break;
        }
        case 3:
        {
            system("cls");

            cout << "masukan Nilai Panjang: ";
            cin >> x;
            cout << "masukan Nilai Lebar: ";
            cin >> y;
            cout << "masukan Nilai Tinggi: ";
            cin >> z;
            TugasSatu tugassatu = TugasSatu(x, y, z);
            cout << "Volume Baloknya adalah :" << tugassatu.volume_balok() << endl;
            break;
        }
        case 4:
        {
            system("cls");

            cout << "masukan Nilai Jari - Jari";
            cin >> x;
            TugasSatu tugassatu = TugasSatu(x);
            cout << "Luas lingkarannya adalah :" << tugassatu.luas_lingkaran() << endl;
            break;
        }
        case 5:
        {
            system("cls");

            cout << "Masukan Nilai diameternya: ";
            cin >> x;
            TugasSatu tugassatu = TugasSatu(x);
            cout << "Keliling lingkaranya adalah :" << tugassatu.keliling_lingkaran() << endl;
            break;
        }
        case 6:
        {
            system("cls");

            cout << "Masukan Nilai Luas alasnya: ";
            cin >> x;
            cout << "Masukan Nilai keliling alasnya: ";
            cin >> y;
            cout << "Masukan Nilai tinggi prisma: ";
            cin >> z;
            TugasSatu tugassatu = TugasSatu(x, y, z);
            cout << "Luas prisma tegak segitiganya adalah :  :" << tugassatu.luas_prisma_tegaksegitiga() << endl;
            break;
        }
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
