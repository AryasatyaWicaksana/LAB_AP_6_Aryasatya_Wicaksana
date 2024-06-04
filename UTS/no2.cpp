#include <iostream>
using namespace std;

int main() {
    int input, jumlah = 0;

    cout << "Masukkan angka: ";
    cin >> input;

    while (input != 0) {
        jumlah += input % 10;
        input /= 10;
    }

    // Menampilkan hasil jumlah digit
    cout << "Jumlah dari semua digit angka adalah: " << jumlah << endl;

    return 0;
}