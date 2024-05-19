#include <iostream>
using namespace std;

void selectionSort(string &huruf, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (huruf[j] < huruf[min])
                min = j;
        char temp = huruf[i];
        huruf[i] = huruf[min];
        huruf[min] = temp;
    }
}

int binarySearch(string huruf, int kiri, int kanan, char target) {
    while (kiri <= kanan) {
        int mid = kiri + (kanan - kiri) / 2;
        if (huruf[mid] == target)
            return mid;
        if (huruf[mid] < target)
            kiri = mid + 1;
        else
            kanan = mid - 1;
    }
    return -1;
}

int main() {
    string kalimat;
    char input;

    cout << "===============================================" << endl;
    cout << "======PROGRAM MENENTUKAN INDEKS PADA HURUF=====" << endl;
    cout << "===============================================" << endl;

    cout << "Masukkan kalimat yang Anda inginkan: ";
    getline(cin, kalimat);

    cout << "Masukkan huruf yang Anda ingin cari: ";
    cin >> input;
    cout << endl;

    selectionSort(kalimat, kalimat.size());

    int result = binarySearch(kalimat, 0, kalimat.size() - 1, input);

    if (result == -1) {
        cout << "Huruf yang Anda cari tidak ditemukan!" << endl;
    } else {
        cout << "Huruf ditemukan pada indeks ke- " << result << endl;
    }

    return 0;
}