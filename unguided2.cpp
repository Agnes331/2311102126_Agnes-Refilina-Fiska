#include <iostream>
using namespace std;

class Mahasiswa {
    private:
        string nama;
        long long nim; // Menggunakan long long untuk menampung NIM yang besar
        string prodi;
    public:
        void setNama(string nama) {
            this->nama = nama;
        }
        void setNim(long long nim) { // Mengubah tipe data parameter menjadi long long
            this->nim = nim;
        }
        void setProdi(string prodi) {
            this->prodi = prodi;
        }
        string getNama() {
            return nama;
        }
        long long getNim() { // Mengembalikan tipe data long long
            return nim;
        }
        string getProdi() {
            return prodi;
        }
};

int main() {
    Mahasiswa mhs;
    mhs.setNama("Agnes Refilina Fiska");
    mhs.setNim(2311102126LL); // LL menandakan bahwa angka ini adalah long long
    mhs.setProdi("Teknik Informatika");
    cout << "Nama Mahasiswa: " << mhs.getNama() << endl;
    cout << "NIM: " << mhs.getNim() << endl;
    cout << "Prodi: " << mhs.getProdi() << endl;
    return 0;
}