#include <iostream>

using namespace std;

int main() {
    // Mencetak angka dari 1 sampai 10
    int angka = 1;
    while (angka <= 10) {
        cout << angka << " ";
        angka++;
    }
    cout << endl; // Baris baru setelah loop pertama

    // Mencetak angka genap dari 1 sampai 20
    angka = 1; // Menginisialisasi ulang angka menjadi 1
    while (angka <= 20) {
        if (angka % 2 == 0) {
            cout << angka << " ";
        }
        angka++;
    }
    cout << endl; // Baris baru setelah loop kedua

    return 0;
}
