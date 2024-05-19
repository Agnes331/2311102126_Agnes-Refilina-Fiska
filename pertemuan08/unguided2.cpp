#include <iostream>
#include <cctype>
using namespace std;

int countVowels(const string &sentence) {
    int count = 0;
    for (char ch : sentence) {
        char lowercase_ch = tolower(ch);
        if (tolower(lowercase_ch) == 'a' || lowercase_ch == 'e' || lowercase_ch == 'i' ||
            lowercase_ch == 'o' || lowercase_ch == 'u') {
            count++;
        }
    }
    return count;
}

int countConsonants(const string &sentence) {
    int count = 0;
    for (char ch : sentence) {
        char lowercase_ch = tolower(ch);
        if (isalpha(lowercase_ch) && !(
            lowercase_ch == 'a' || lowercase_ch == 'e' || lowercase_ch == 'i' ||
            lowercase_ch == 'o' || lowercase_ch == 'u')) {
            count++;
        }
    }
    return count;
}

int main() {
    string kalimat;
    cout << "===============================================" << endl;
    cout << "====== PROGRAM MENENTUKAN HURUF VOKAL==========" << endl;
    cout << "===============================================" << endl;
    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    int jumlah_vokal = countVowels(kalimat);
    int jumlah_konsonan = countConsonants(kalimat);
    int jumlah_karakter = kalimat.length();

    cout << "Jumlah huruf vokal dalam kalimat adalah: " << jumlah_vokal << endl;
    cout << "Jumlah huruf konsonan dalam kalimat adalah: " << jumlah_konsonan << endl;
    cout << "Jumlah total karakter dalam kalimat adalah: " << jumlah_karakter << endl;

    return 0;
}
