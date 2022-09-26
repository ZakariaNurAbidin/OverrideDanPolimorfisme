package Polimorfisme;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // bangun datar
        System.out.println("Program Java");
        BangunDatar bangunDatar = new BangunDatar();
        bangunDatar.luas();
        bangunDatar.keliling();
        System.out.println("1. Persegi");
        System.out.println("2. Lingkaran");
        System.out.println("3. Persegi panjang");
        System.out.println("4. Segitiga");
        System.out.print("Ingin menghitung bangun datar apa : ");
        int plh = input.nextInt();
        System.out.print("\n");
        if (plh == 1){
            System.out.println("Program untuk menghitung persegi");
            // membuat objek persegi dan mengisi nilai properti
            System.out.print("Masukkan panjang sisi : ");
            int psg = input.nextInt();
            Persegi persegi = new Persegi(psg);

            System.out.println("Luas persegi: " + persegi.luas());
            System.out.println("keliling persegi: " + persegi.keliling());
        }
        else if (plh == 2){
            System.out.println("Program untuk menghitung lingkaran");
            // membuat objek Lingkaran dan mengisi nilai properti
            System.out.print("Masukkan panjang Jari-Jari : ");
            int jr = input.nextInt();
            Lingkaran lingkaran = new Lingkaran(jr);

            System.out.println("Luas lingkaran: " + lingkaran.luas());
            System.out.println("keliling lingkaran: " + lingkaran.keliling());
        }
        else if (plh == 3){
            System.out.println("Program untuk menghitung persegi panjang");
            // membuat objek Persegi Panjang dan mengisi nilai properti
            System.out.print("Masukkan panjang : ");
            int Pjg = input.nextInt();
            System.out.print("Masukkan Lebar : ");
            int lbr = input.nextInt();
            PersegiPanjang persegiPanjang = new PersegiPanjang(Pjg,lbr);
            System.out.println("Luas Persegi Panjang: " + persegiPanjang.luas());
            System.out.println("keliling Persegi Panjang: " + persegiPanjang.keliling());
        }
        else if (plh == 4){
            System.out.println("Program untuk menghitung segitiga");
            // membuat objek Segitiga dan mengisi nilai properti
            System.out.print("Masukkan panjang alas : ");
            int als = input.nextInt();
            System.out.print("Masukkan tinggi : ");
            int tgi = input.nextInt();
            Segitiga Segitiga = new Segitiga(als,tgi);

            System.out.println("Luas segitiga: " + Segitiga.luas());
        }
        else {
            System.out.println("Eror....!");
            System.out.println("Inputan tidak ada dalam pilihan");
        }
    }
}