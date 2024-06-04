#include <iostream>

using namespace std;

int main() {
    // Loop for pertama: mencetak "Hello World" sebanyak 10 kali
    for(int i = 1; i <= 10; i++) {
        cout << "Hello World" << endl;
    }

    // Loop for kedua: mencetak angka genap dari 1 sampai 20
    for(int i = 1; i <= 20; i++) {
        if(i % 2 == 0) {  // Mengecek apakah i adalah angka genap
            cout << i << " "; 
        }
    }
    cout << endl; 

    // Loop for ketiga: mencetak persegi 4x4 bintang
    for(int baris = 1; baris <= 4; baris++) {  // Loop untuk baris
        for(int kolom = 1; kolom <= 4; kolom++) {  // Loop untuk kolom
            cout << "* ";  // Mencetak bintang
        }
        cout << endl;  
    }

    // Loop for keempat: mencetak segitiga bintang
    for(int i = 1; i <= 4; i++) {  // Loop untuk baris
        for(int j = 1; j <= i; j++) {  // Loop untuk kolom
            cout << "* ";  
        }
        cout << endl; 
    }

    int n, num = 0, sum = 0;

    cout << "Masukkan suku ke : ";
    cin >> n;

    // Loop for kelima: menghitung suku ke-n dan jumlah suku
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {  // Mengecek apakah i adalah angka genap
            num = num;  // Jika genap, num tetap sama
        } else {
            num += 5;  // Jika ganjil, tambahkan 5 ke num
        }
        sum += num;  // Menambahkan num ke sum

        cout << num << " ";  // Mencetak nilai num saat ini
    }
    cout << endl;  // Menambahkan newline untuk memisahkan output

    // Menampilkan hasil akhir
    cout << "Suku ke " << n << " adalah " << num << endl;
    cout << "Jumlah hingga suku ke " << n << " adalah " << sum << endl;

    return 0;
}
