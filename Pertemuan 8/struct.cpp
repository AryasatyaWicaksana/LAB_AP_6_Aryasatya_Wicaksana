#include<iostream>
#include<vector>
using namespace std; 

struct Mahasiswa // Definisi struct Mahasiswa diawali dengan huruf kapital
{
   string nama, nim; 
   float nilai;
};

int main(){
    vector<Mahasiswa> mahasiswa; // Deklarasi vector untuk menyimpan data Mahasiswa
    Mahasiswa mhs;
    int n; 

    cout << "Masukkan jumlah mahasiswa: "; 
    cin >> n; // Input jumlah mahasiswa

    for(int i = 0; i < n; i++) {
        cin.get(); // Membersihkan buffer agar getline dapat digunakan dengan benar
        
        cout << "Mahasiswa ke-" << i+1 << endl;
        cout << "Masukkan nama: "; 
        getline(cin, mhs.nama); // Input nama mahasiswa

        cout << "Masukkan nim: "; 
        cin >> mhs.nim; // Input NIM mahasiswa

        cout << "Masukkan nilai: "; 
        cin >> mhs.nilai; // Input nilai mahasiswa

        mahasiswa.push_back(mhs); // Simpan data ke bagian belakang vector
    }

    for(int i = 0; i < n; i++){
        // Tampilkan data mahasiswa
        cout << mahasiswa[i].nama << " NIM " << mahasiswa[i].nim << " nilai " << mahasiswa[i].nilai << endl;
    }

    return 0;
}
