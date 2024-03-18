#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int size;
    cout << "Masukkan ukuran array: ";
    cin >> size;

    // Membuat vector untuk menyimpan elemen-elemen array
    vector<int> arr(size);

    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan " << size << " angka secara berurutan:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Mencari nilai maksimum dan minimum dari array
    int max_val = *max_element(arr.begin(), arr.end());
    int min_val = *min_element(arr.begin(), arr.end());

    // Mencari nilai rata-rata dari array
    double avg_val = accumulate(arr.begin(), arr.end(), 0.0) / size;

    // Menampilkan hasil
    cout << "Nilai maksimum: " << max_val << endl;
    cout << "Nilai minimum: " << min_val << endl;
    cout << "Nilai rata-rata: " << avg_val << endl;

    return 0;
}