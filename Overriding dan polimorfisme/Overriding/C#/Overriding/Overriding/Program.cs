using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Override
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Menu utama = new Menu();
            utama.menu();
            Console.ReadLine();
        }
    }
    class Menu
    {
        public void menu()
        {
            ulang:
            Console.WriteLine("Menghitung luas dan keliling bangun datar");
            Console.WriteLine("====================================");
            Console.WriteLine("1. Persegi");
            Console.WriteLine("2. Lingkaran");
            Console.WriteLine("3. Persegi Panjang");
            Console.WriteLine("4. Segitiga");
            Console.Write("Ingin menghitung bangun datar apa :");
            int plh = int.Parse(Console.ReadLine());
            Console.WriteLine();

            if (plh == 1)
            {
                Persegi a = new Persegi();

                Console.WriteLine("1. Program Untuk Menghitung Persegi");
                Console.WriteLine("-------------------------");
                Console.Write("Sisi : ");
                a.sisi = (int.Parse(Console.ReadLine()));
                Console.WriteLine("Luas = {0} cm", a.hitungLuas());
                Console.WriteLine("Keliling = {0} cm", a.hitungKeliling());
                Console.WriteLine();
            }

            else if (plh == 2)
            {
                Lingkaran d = new Lingkaran();

                Console.WriteLine("2. Program Untuk Menghitung Lingkaran");
                Console.WriteLine("-------------------------");
                Console.Write("Jari-Jari : ");
                d.jarijari = (int.Parse(Console.ReadLine()));
                Console.WriteLine("Luas       = {0} cm", d.hitungLuas());
                Console.WriteLine("Keliling   = {0} cm", d.hitungKeliling());
                Console.WriteLine();
            }

            else if (plh == 3)
            {
                PersegiPanjang b = new PersegiPanjang();

                Console.WriteLine("3. Program Untuk Menghitung Persegi Panjang");
                Console.WriteLine("---------------------------");
                Console.Write("Panjang : ");
                b.panjang = (int.Parse(Console.ReadLine()));
                Console.Write("Lebar   : ");
                b.lebar = (int.Parse(Console.ReadLine()));
                Console.WriteLine("Luas    = {0} cm", b.hitungLuas());
                Console.WriteLine("Keliling   = {0} cm", b.hitungKeliling());
                Console.WriteLine();
            }

            else if (plh == 4)
            {
                Segitiga c = new Segitiga();

                Console.WriteLine("4. Program Untuk Menghitung Segitiga");
                Console.WriteLine("------------------------");
                Console.Write("Alas   : ");
                c.alas = (int.Parse(Console.ReadLine()));
                Console.Write("Tinggi : ");
                c.tinggi = (int.Parse(Console.ReadLine()));
                Console.WriteLine("Luas   = {0} cm", c.luas_segitiga());
            }

            else
            {
                Console.WriteLine("Eror......!");
                Console.WriteLine("Inputan anda tidak ada dalam pilihan");
                Console.WriteLine();
                goto ulang;
            }
        }

    }


    public abstract class BangunDatar
    {
        public double _hitung;

        public double Hitung
        {
            get { return _hitung; }
            set { _hitung = value; }
        }

        public abstract double hitungLuas();

        public abstract double hitungKeliling();
    }

    class Persegi : BangunDatar
    {
        private double s;

        public double sisi
        {
            get { return s; }
            set { s = value; }
        }

        public override double hitungLuas()
        {
            _hitung = s * s;
            return _hitung;
        }

        public override double hitungKeliling()
        {
            _hitung = s * 4;
            return _hitung;
        }

    }

    class Lingkaran : BangunDatar
    {
        private double r, luas;

        public double jarijari
        {
            get { return r; }
            set
            {
                r = value;
            }
        }

        public override double hitungLuas()
        {
            luas = 3.14 * r * r;
            return luas;
        }
        public override double hitungKeliling()
        {
            float k = (float)(2 * Math.PI * r);
            return k;
        }
    }

    class PersegiPanjang : BangunDatar
    {
        private float p, l, luas;

        public float panjang
        {
            get { return p; }
            set
            {
                p = value;
            }
        }

        public float lebar
        {
            get { return l; }
            set
            {
                l = value;
            }
        }

        public override double hitungLuas()
        {
            luas = p * l;
            return luas;
        }
        public override double hitungKeliling()
        {
            float k = 2 * panjang + 2 * lebar;
            return k;
        }
    }

    class Segitiga
    {
        private float a, t, luas;

        public float alas
        {
            get { return a; }
            set
            {
                a = value;
            }
        }

        public float tinggi
        {
            get { return t; }
            set
            {
                t = value;
            }
        }

        public float luas_segitiga()
        {
            luas = (a * t) / 2;
            return luas;
        }
    }
}