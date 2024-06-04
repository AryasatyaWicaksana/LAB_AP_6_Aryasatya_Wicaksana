#include <iostream>

using namespace std;

int main() {
    int angka = 1;

    // Loop do-while pertama: mencetak angka 1 sampai 10
    do {
        cout << angka << " ";  // Mencetak nilai angka saat ini
        angka++;  // Increment angka
    } while(angka <= 10);  // Kondisi loop: selama angka kurang dari atau sama dengan 10

    cout << endl;  // Menambahkan baris baru untuk memisahkan output dari dua loop

    angka = 1;
    // Loop do-while kedua: hanya mencetak angka 1 sekali karena kondisi awal sudah false
    do {
        cout << angka << " ";  // Mencetak nilai angka saat ini
        angka++;  // Increment angka
    } while(angka > 10);  // Kondisi loop: selama angka lebih besar dari 10 (kondisi awal false)

    return 0;  // Mengembalikan nilai 0 untuk menunjukkan program selesai dengan sukses
}
