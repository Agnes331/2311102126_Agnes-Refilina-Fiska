#include <iostream>
using namespace std;

// Deklarasi fungsi-fungsi
double hitungLuas(double panjang, double lebar);
double hitungKeliling(double panjang, double lebar);

int main() {
    double panjang, lebar;

    // Meminta input panjang dan lebar dari pengguna
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;

    // Menghitung dan menampilkan luas persegi panjang
    cout << "Luas persegi panjang: " << hitungLuas(panjang, lebar) << endl;

    // Menghitung dan menampilkan keliling persegi panjang
    cout << "Keliling persegi panjang: " << hitungKeliling(panjang, lebar) << endl;

    return 0;
}

// Definisi fungsi untuk menghitung luas persegi panjang
double hitungLuas(double panjang, double lebar) {
    return panjang * lebar;
}

// Definisi fungsi untuk menghitung keliling persegi panjang
double hitungKeliling(double panjang, double lebar) {
    return 2 * (panjang + lebar);
}