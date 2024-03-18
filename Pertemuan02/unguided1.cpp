#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    int num;

    // Meminta pengguna untuk memasukkan data array
    cout << "Masukkan 10 angka secara berurutan: ";
    for (int i = 0; i < 10; ++i) {
        cin >> num;
        numbers.push_back(num);
    }

    // Menampilkan data array
    cout << "Data Array: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i];
        if (i != numbers.size() - 1)
            cout << " ";
    }
    cout << endl;

    // Menampilkan nomor genap
    cout << "Nomor Genap: ";
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i];
            if (i != numbers.size() - 1)
                cout << ", ";
        }
    }
    cout << endl;

    // Menampilkan nomor ganjil
    cout << "Nomor Ganjil: ";
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 != 0) {
            cout << numbers[i];
            if (i != numbers.size() - 1)
                cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
