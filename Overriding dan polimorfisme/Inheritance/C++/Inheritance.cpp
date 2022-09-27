#include <iostream>
using namespace std;

class BangunDatar
{
public:
    float luas()
    {
        cout << "\nMenghitung luas bangun datar\n";
        return 0;
    }
    float keliling()
    {
        cout << "Menghitung keliling bangun datar\n";
        return 0;
    }
};

class Persegi : public BangunDatar
{
public:
    float sisi;
};

class Lingkaran : public BangunDatar
{
    // jari-jari lingkaran
public:
    float r;
};

class PersegiPanjang : public BangunDatar
{
public:
    float panjang;
    float lebar;
};

class Segitiga : public BangunDatar
{
public:
    float alas;
    float tinggi;
};

int main()
{
    int plh;
    ulang:
    cout << "--------------------------------------\n";
    cout << "Mengitung bangun datar - Inheritance\n";
    cout << "\nPilih operasi bangun datar!\n";
    cout << "1. Persegi \n2. Lingkaran \n3. Persegi Panjang \n4. Segitiga\nAnda ingin menghitung bangun datar apa (1/2/3/4): ";
    cin >> plh;

    BangunDatar bangunDatar;

    bangunDatar.luas();
    bangunDatar.keliling();

    if (plh == 1)
    {
        Persegi persegi;
        int a;
        cout << "\nMasukkan Sisi : ";
        cin >> a;
        persegi.sisi = a;

        persegi.luas();
        persegi.keliling();
    }

    else if (plh == 2)
    {
        Lingkaran lingkaran;
        int a;
        cout << "\nMasukkan Jari-Jari : ";
        cin >> a;
        lingkaran.r = a;

        lingkaran.luas();
        lingkaran.keliling();
    }

    else if (plh == 3)
    {
        PersegiPanjang persegiPanjang;
        int a, b;
        cout << "\nMasukkan Panjang : ";
        cin >> a;
        persegiPanjang.panjang = a;
        cout << "Masukkan Lebar : ";
        cin >> b;
        persegiPanjang.lebar = b;

        persegiPanjang.luas();
        persegiPanjang.keliling();
    }

    else if (plh == 4)
    {
        Segitiga mSegitiga;
        int a, b;
        cout << "\nMasukkan Alas : ";
        cin >> a;
        mSegitiga.alas = a;
        cout << "Masukkan Tinggi : ";
        cin >> b;
        mSegitiga.tinggi = b;

        mSegitiga.luas();
        mSegitiga.keliling();
    }

    else
    {
        cout << "\nError....!!!\nInputan tidak ada di pilihan\n\n";
        goto ulang;
    }
}
