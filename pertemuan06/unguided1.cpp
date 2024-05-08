#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

// Fungsi untuk membersihkan kalimat dari karakter non-alfabet dan mengonversi huruf ke huruf kecil
string cleanString(const string& str) {
    string cleaned;
    for(char c : str) {
        if(isalpha(c)) {
            cleaned += tolower(c);
        }
    }
    return cleaned;
}

// Fungsi untuk menentukan apakah sebuah kalimat adalah palindrom atau tidak
bool isPalindrome(const string& sentence) {
    stack<char> charStack;
    string cleanedSentence = cleanString(sentence);

    // Memasukkan karakter-karakter kalimat ke dalam stack
    for(char c : cleanedSentence) {
        charStack.push(c);
    }

    // Membandingkan karakter-karakter dari depan dengan karakter-karakter dari belakang
    for(char c : cleanedSentence) {
        if(c != charStack.top()) {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    if(isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}
