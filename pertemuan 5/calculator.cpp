#include <iostream>
#include <cmath> // Library untuk fungsi pow
#include "calc.h"

using namespace std;

// Fungsi untuk mencetak garis
void garis() {
    cout << "====================================" << endl;
}

// Fungsi untuk mencetak bintang
void bintang() {
    cout << "************************************" << endl;
}

// Fungsi untuk menampilkan menu
void menu() {
    garis();
    cout << "Selamat Datang di Program Kalkulator" << endl;
    garis();
    cout << "1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n5. Modulo\n6. Pangkat" << endl;
    garis();
}

int main() {
    char cont;

    do {
        system("cls"); // Membersihkan layar

        int operasi, a, b;
        float hasil;

        menu();
        cout << "Masukkan operasi : ";
        cin >> operasi;

        cout << "Masukkan angka pertama : ";
        cin >> a;

        cout << "Masukkan angka kedua : ";
        cin >> b;

        switch(operasi) {
            case 1:
                hasil = tambah(a, b); // Panggil fungsi tambah
                break;
            case 2:
                hasil = kurang(a, b); // Panggil fungsi kurang
                break;
            case 3:
                hasil = kali(a, b); // Panggil fungsi kali
                break;
            case 4:
                hasil = bagi(a, b); // Panggil fungsi bagi
                break;
            case 5:
                hasil = modulo(a, b); // Panggil fungsi modulo
                break;
            case 6:
                hasil = pangkat(a, b); // Panggil fungsi pangkat
                break;
            default:
                cout << "Operasi tidak valid!" << endl;
                continue; // Kembali ke awal loop jika operasi tidak valid
        }

        cout << "Hasil = " << hasil << endl;

        cout << "Apakah Anda ingin melanjutkan? [Y/N] : ";
        cin >> cont;
    } while(toupper(cont) == 'Y'); // Loop terus jika input adalah 'Y' atau 'y'

    bintang();
    cout << "Terima Kasih Telah Menggunakan Program Kalkulator" << endl;

    return 0;
}
