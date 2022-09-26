package Polimorfisme;

public class PersegiPanjang extends BangunDatar {
    int panjang;
    int lebar;

    public PersegiPanjang(int panjang, int lebar) {
        this.lebar = lebar;
        this.panjang = panjang;
    }

    @Override
    public float luas(){
        return this.lebar * this.panjang;
    }

    @Override
    public float keliling(){
        return 2*this.lebar + 2*this.panjang;
    }
}