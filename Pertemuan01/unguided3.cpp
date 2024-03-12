/*
oleh Agnes Refilina Fiska - 2311102126
*/
// Contoh Program Fungsi Map
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> umurMahasiswa;

    // Menambahkan data ke dalam map
    umurMahasiswa["Asya"] = 18;
    umurMahasiswa["Adam"] = 18;
    umurMahasiswa["Agnes"] = 19;

    // Menampilkan umur mahasiswa
    cout << "Umur Asya: " << umurMahasiswa["Asya"] << endl;
    cout << "Umur Adam: " << umurMahasiswa["Adam"] << endl;
    cout << "Umur Agnes: " << umurMahasiswa["Agnes"] << endl;

    // Meminta input dari pengguna untuk menambahkan data mahasiswa baru
    string nama;
    int umur;
    cout << "\nMasukkan nama mahasiswa baru: ";
    cin >> nama;
    cout << "Masukkan umur mahasiswa baru: ";
    cin >> umur;

    // Menambahkan data mahasiswa baru ke dalam map
    umurMahasiswa[nama] = umur;

    // Menampilkan daftar mahasiswa beserta umur mereka
    cout << "\nDaftar Mahasiswa:\n";
    for (const auto& pair : umurMahasiswa) {
        cout << "Nama: " << pair.first << ", Umur: " << pair.second << endl;
    }
    
    return 0;
}