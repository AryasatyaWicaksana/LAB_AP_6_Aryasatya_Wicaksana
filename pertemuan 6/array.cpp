#include <iostream>
#include <array>

using namespace std;

int main() {
    system("cls"); // Membersihkan layar (hanya untuk Windows)

    //? Deklarasi dan Inisialisasi Array
    array<string, 5> nama = {"Andi", "Budi", "Santi", "Wanto", "Denis"};

    // Mengakses elemen dalam array
    for(string mhs : nama) {
        cout << mhs << endl;
    }

    //? Array Multidimensi
    int matrix[2][2] = {{1, 3}, {2, 4}};

    cout << "Matrix:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //? String (Array of Characters)
    string nama_str = "Jonrio";
    
    cout << "Karakter dalam string:" << endl;
    for(int i = 0; i < nama_str.length(); i++) {
        cout << nama_str[i] << " ";
    }
    cout << endl;

    //? Contoh 1: Input dan Output Nilai Mahasiswa
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    float nilai[n];
    for(int i = 0; i < n; i++) {
        cout << "Masukkan nilai mahasiswa ke " << i + 1 << " : ";
        cin >> nilai[i];
    }

    for(int i = 0; i < n; i++) {
        cout << "Nilai mahasiswa ke " << i + 1 << " adalah " << nilai[i] << endl;
    }

    //? Contoh 2: Menampilkan Nama Karyawan
    string nama_karyawan[] = {"Andi", "Yusuf", "Budi", "Yanto", "Santi", "Dodi"};

    cout << "Nama Karyawan:" << endl;
    for(int i = 0; i < sizeof(nama_karyawan) / sizeof(string); i++) {
        cout << nama_karyawan[i] << endl;
    }

    //? Contoh 3: Penjumlahan Matriks 2x2
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    cout << "Matriks 1" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks1[i][j];
        }
    }

    cout << "Matriks 2" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks2[i][j];
        }
    }

    cout << "Hasil Penjumlahan" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
