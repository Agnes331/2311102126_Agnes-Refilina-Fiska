#include <iostream>
#include <stack>

using namespace std;

string BeforeReverse_126(string sentence_126) {
  stack<char> s; // Buat stack untuk menyimpan karakter kalimat

  for (int i = 0; i < sentence_126.length(); i++) { // Masukkan karakter kalimat ke stack
    s.push(sentence_126[i]);
  }

  string AfterReverse_126; // Membalik kalimat dengan mengeluarkan karakter dari stack
  while (!s.empty()) {
    AfterReverse_126 += s.top();
    s.pop();
  }

  return AfterReverse_126;
}

int main() {
  string sentence_126;

  do {
  cout << "\nMasukkan kalimat yang ingin dibalikkan: ";  // Input kalimat dari pengguna
  getline(cin, sentence_126);

  string AfterReverse_126 = BeforeReverse_126(sentence_126);  // Membalik kalimat

  cout << "Kalimat yang dibalik: " << AfterReverse_126 << endl; // Menampilkan kalimat yang dibalik

  } while (sentence_126 != "exit");
  return 0;
}