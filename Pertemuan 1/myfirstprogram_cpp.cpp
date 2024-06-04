#include <iostream> // library i/o pada c++
#include <iomanip> // library untuk set precision

using namespace std; // supaya bisa tanpa :std

int main() {
    string nama;  
    int nim;      
    char kom;     
    float ip;     

    // cout untuk mengeluarkan output
    // cin untuk Mengambil input user
    cout << "Masukkan Nama : ";
    // Menggunakan getline untuk membaca seluruh baris, memungkinkan nama dengan spasi
    getline(cin, nama);

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan IP : ";
    cin >> ip;  

    // Menampilkan hasil input
    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;
    // Menampilkan IP dengan 2 desimal dengan setprecision di c++
    cout << fixed << setprecision(2) << "IP : " << ip << endl;

    return 0;
}
