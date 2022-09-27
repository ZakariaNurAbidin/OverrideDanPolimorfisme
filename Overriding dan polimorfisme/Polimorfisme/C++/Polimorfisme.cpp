#include <iostream>
#include <math.h>
#define Pi 3.14159265358979323846  /* pi */
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
    float luas() {
        float luas = sisi * sisi;
        cout << "\nLuas Persegi: " << luas << endl;
        return luas;
    }

    float keliling() {
        float keliling = 4 * sisi;
        cout << "Keliling Persegi: " << keliling << endl;
        return keliling;
    }
};

class Lingkaran : public BangunDatar
{
public:
    float r;
    float luas() {
        float luas = (float)(Pi * r * r);
        cout << "\nLuas lingkaran: " << luas << endl;
        return luas;
    }

    float keliling() {
        float keliling = (float)(2 * Pi * r);
        cout << "Keliling Lingkaran: " << keliling << endl;
        return keliling;
    }
};

class PersegiPanjang : public BangunDatar
{
public:
    float panjang;
    float lebar;
    float luas() {
        float luas = panjang * lebar;
        cout << "\nLuas Persegi Panjang:" << luas << endl;
        return luas;
    }

    float keliling() {
        float kll = 2 * panjang + 2 * lebar;
        cout << "Keliling Persegi Panjang: " << kll << endl;
        return kll;
    }
};

class Segitiga : public BangunDatar
{
public:
    float alas;
    float tinggi;
    float luas() {
        float luas = (alas * tinggi) / 2;
        cout << "\nLuas Segitiga: " << luas << endl;
        return luas;
    }
};

int main()
{
    int plh;
    ulang:
    cout << "--------------------------------------\n";
    cout << "Menghitung bangun datar - Polimorfisme\n";
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
