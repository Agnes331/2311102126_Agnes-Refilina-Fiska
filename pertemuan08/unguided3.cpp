#include <iostream>
using namespace std;

// Fungsi untuk menghitung berapa kali target muncul dalam array
int hitungAngka(const int array[], int size, int target) {
    int count = 0; // Inisialisasi counter untuk menyimpan jumlah kemunculan target
    for (int i = 0; i < size; i++) { // Iterasi melalui setiap elemen array
        if (array[i] == target) { // Jika elemen saat ini sama dengan target
            count++;
        }
    }
    return count; // Mengembalikan jumlah kemunculan target dalam array
}

int main() {
    const int size = 10; 
    int array[size] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}; 
    int target = 4; // Angka yang ingin dicari

    // Memanggil fungsi untuk menghitung jumlah kemunculan angka target dalam array
    int count = hitungAngka(array, size, target);

    // Menampilkan hasil jumlah kemunculan angka target
    cout << "=======================================" << endl;
    cout << "========MENGHITUNG ANGKA TARGET========" << endl;
    cout << "=======================================" << endl;
    cout << "Jumlah angka " << target << " Dalam data adalah: " << count << endl;

    return 0; 
}
