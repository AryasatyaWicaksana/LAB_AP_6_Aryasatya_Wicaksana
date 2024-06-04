#include <iostream>

using namespace std;

int main() {
    // Label a: Titik awal program
    a: 
        cout << "Hello World" << endl;
        // Lompat ke label d
        goto d;

    // Label b: Menampilkan pesan dan mengakhiri program
    b:
        cout << "Universitas Sumatera Utara" << endl;
        return 0;

    // Label c: Menampilkan pesan dan lompat ke label b
    c:
        cout << "Fasilkom-TI" << endl;
        // Lompat ke label b
        goto b;

    // Label d: Menampilkan pesan dan lompat ke label c
    d:
        cout << "Ilmu Komputer" << endl;
        // Lompat ke label c
        goto c;

    // Loop untuk mencetak angka dari 1 sampai 10
    int angka = 1;
    loop:
        cout << angka << " ";
        angka++;
    // Mengecek jika angka kurang dari atau sama dengan 10, jika benar, lompat kembali ke label loop
    if(angka <= 10) {
        goto loop;
    }
}
