/*
by Jordan Angkawijaya - 2311102139
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Deklarasi Struct Node
struct Node {
    string Name;
    int Age;
    Node* next;
};

Node* head;
Node* tail;

//Inisialisasi Node
void Initialize() {
    head = NULL;
    tail = NULL;
}

// Pengecekan
bool ItsEmpty() {
    if (head == NULL)
        return true;
    else
        return false;
}

//Tambah Depan
void InsertFront(string name, int age) {
    //Buat Node baru
    Node* baru = new Node;
    baru->Name = name;
    baru->Age = age;
    baru->next = NULL;

    if (ItsEmpty() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        baru->next = head;
        head = baru;
    }
}

//Tambah Belakang
void InsertBack(string name, int age) {
    //Buat Node baru
    Node* baru = new Node;
    baru->Name = name;
    baru->Age = age;
    baru->next = NULL;

    if (ItsEmpty() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        tail->next = baru;
        tail = baru;
    }
}

//Hitung Jumlah List
int CountList() {
    Node* hitung;
    hitung = head;
    int jumlah = 0;

    while (hitung != NULL) {
        jumlah++;
        hitung = hitung->next;
    }

    return jumlah;
}

//Tambah Tengah
void InsertMiddle(string name, int age, int posisi) {
    if (posisi < 1 || posisi > CountList()) {
        cout << "Heyyy, the position is out of range!" << endl;
    }
    else if (posisi == 1) {
        cout << "Wow, the position you input wasn't the middle." << endl;
    }
    else {
        Node* baru, * bantu;
        baru = new Node();
        baru->Name = name;
        baru->Age = age;

        // tranversing
        bantu = head;
        int nomor = 1;

        while (nomor < posisi - 1) {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

//Hapus Depan
void EraseFront() {
    Node* hapus;

    if (ItsEmpty() == false) {
        if (head->next != NULL) {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "ITS EMPTY!" << endl;
    }
}

//Hapus Belakang
void EraseBack() {
    Node* hapus;
    Node* bantu;

    if (ItsEmpty() == false) {
        if (head != tail) {
            hapus = tail;
            bantu = head;

            while (bantu->next != tail) {
                bantu = bantu->next;
            }

            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "ITS EMPTY!" << endl;
    }
}

//Hapus Tengah
void EraseMiddle(int posisi) {
    Node* hapus, * bantu, * bantu2;

    if (posisi < 1 || posisi > CountList()) {
        cout << "Heyyy, the position is out of range!" << endl;
    }
    else if (posisi == 1) {
        cout << "Wow, the position you input wasn't the middle." << endl;
    }
    else {
        int nomor = 1;
        bantu = head;

        while (nomor <= posisi) {
            if (nomor == posisi - 1) {
                bantu2 = bantu;
            }

            if (nomor == posisi) {
                hapus = bantu;
            }

            bantu = bantu->next;
            nomor++;
        }

        bantu2->next = bantu;
        delete hapus;
    }
}

//Ubah Depan
void ChangeFront(string name, int age) {
    if (ItsEmpty() == false) {
        head->Name = name;
        head->Age = age;
    }
    else {
        cout << "THERE'S NOTHING TO CHANGE!" << endl;
    }
}

//Ubah Tengah
void ChangeMiddle(string name, int age, int posisi) {
    Node* bantu;

    if (ItsEmpty() == false) {
        if (posisi < 1 || posisi > CountList()) {
            cout << "Heyyy, the position is out of range!" << endl;
        }
        else if (posisi == 1) {
            cout << "Wow, the position you input wasn't the middle." << endl;
        }
        else {
            bantu = head;
            int nomor = 1;

            while (nomor < posisi) {
                bantu = bantu->next;
                nomor++;
            }

            bantu->Name = name;
            bantu->Age = age;
        }
    }
    else {
        cout << "ITS EMPTY!" << endl;
    }
}

//Ubah Belakang
void ChangeBack(string name, int age) {
    if (ItsEmpty() == false) {
        tail->Name= name;
        tail->Age= age;
    }
    else {
        cout << "ITS EMPTY" << endl;
    }
}

//Hapus List
void EraseList() {
    Node* bantu, * hapus;
    bantu = head;

    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }

    head = tail = NULL;
    cout << "Hoorah! You erased EVERYTHING YOU WORKED HARD FOR!" << endl;
}

//Tampilkan List
void Reveal() {
    Node* bantu;
    bantu = head;

    cout << left << setw(15) << "-Nama-" << right << setw(4) << "-Usia-" << endl; // Supaya rapi

    if (ItsEmpty() == false) {
        while (bantu != NULL) {
            cout << left << setw(15) << bantu->Name << right << setw(4) << bantu->Age << endl; // Supaya lurus di output
            bantu = bantu->next;
        }

        cout << endl;
    }
    else {
        cout << "ITS EMPTY!" << endl;
    }
}

int main() {
    Initialize(); // Inisialisasi Linked List
    cout << "\n-=-=-= (A) WELCOME TO AGNES PROGRAM =-=-=-" << endl; // Menampilkan nama dan umur awal
    InsertFront("Karin", 18);
    InsertFront("Hoshino", 18);
    InsertFront("Akechi", 20); 
    InsertFront("Yusuke", 19);
    InsertFront("Michael", 18);
    InsertFront("Jane", 20);
    InsertFront("John", 19);
    InsertFront("Agnes", 19);
    Reveal();

    // Menjawab poin b
    cout << "-=-=-= (B) Penghapusan data 'Akechi' =-=-=-" << endl;
    EraseMiddle(6);
    Reveal();

    // Menjawab poin c
    cout << "-=-=-= (C) Penambahan data 'Futaba (18)' diantara John & Jane =-=-=-" << endl;
    InsertMiddle("Futaba", 18, 3);
    Reveal();

    // Menjawab poin d
    cout << "-=-=-= (D) Penambahan data 'Igor (20)' di awal =-=-=-" << endl;
    InsertFront("Igor", 20);
    Reveal();

    // Menjawab poin e & f
    cout << "-=-=-= (E) Mengubah data 'Michael' menjadi 'Reyn (18)' =-=-=-" << endl;
    cout << "-=-=-= (F) Tampilan Akhir! =-=-=-" << endl;
    ChangeMiddle("Reyn", 18, 6);
    Reveal();

    return 0;
}