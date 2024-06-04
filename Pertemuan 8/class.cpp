#include<iostream>
#include<vector>
using namespace std; 

// Kelas Mahasiswa, mirip seperti struct, tetapi di dalam kelas kita bisa menambahkan fungsi
class Mahasiswa {
    // Access Modifier private: hanya bisa diakses dari dalam kelas
    private:
        string Nama, Nim; 
        float Nilai;

    // Access Modifier public: bisa diakses dari luar kelas
    public:
        // Constructor Method: fungsi yang dipanggil pertama kali saat objek dibuat
        Mahasiswa(string nama, string nim, float nilai) {
            this->Nama = nama; 
            this->Nim = nim; 
            this->Nilai = nilai;
        } 

        // Getter Method: Method untuk mendapatkan nilai yang ada di private
        string getNama() {
            return this->Nama;
        }

        string getNim() {
            return this->Nim;
        }

        float getNilai() {
            return this->Nilai;
        }

        // Method untuk menampilkan data mahasiswa
        void display() {
            cout << "Nama : " << this->getNama() << endl; 
            cout << "NIM : " << this->Nim << endl; 
            cout << "Nilai : " << this->Nilai << endl; 
        }
};

int main() {
    vector<Mahasiswa> mahasiswa; // Deklarasi vector untuk menyimpan data Mahasiswa
    int n; 
    string nama, nim; 
    float nilai;

    cout << "Masukkan jumlah mahasiswa: "; 
    cin >> n; // Input jumlah mahasiswa

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i+1 << endl;

        cin.get(); // Membersihkan buffer agar getline dapat digunakan dengan benar

        cout << "Masukkan nama : "; 
        getline(cin, nama); // Input nama mahasiswa

        cout << "Masukkan nim : "; 
        cin >> nim; // Input NIM mahasiswa

        cout << "Masukkan nilai : "; 
        cin >> nilai; // Input nilai mahasiswa

        Mahasiswa mhs(nama, nim, nilai); // Membuat objek Mahasiswa
        mahasiswa.push_back(mhs); // Menyimpan objek ke dalam vector
    }

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i+1 << endl;
        mahasiswa[i].display(); // Menampilkan data mahasiswa
    }

    return 0;
}
