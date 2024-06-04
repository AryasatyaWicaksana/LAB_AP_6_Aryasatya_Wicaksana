#include <iostream>
#include <vector> // library untuk vector

using namespace std;

int main() {
    system("cls");

    //? Vector Decalaration and Initialization
    vector<string> nama = {"Andi", "Budi", "Santi", "Wanto", "Denis"};

    //? Accessing Elements in Vector
    // for(int i = 0; i < nama.size(); i++) {
    //     cout << nama[i] << endl;
    // }

    // cout << endl;

    //* For Each Loop
    for(string mhs : nama) {
        cout << mhs << endl;
    }

    //? nambah data vector ke belakang
    // nama.push_back("Wawan");

    //? ngapus data di vector
    // nama.pop_back();        //* berfungsi untuk menghapus data vector paling akhir
    // nama.erase(nama.begin() + 2);       //* erase() berfungsi untuk menghapus data, begin() untuk mendapatkan data vector paling awal

    // for(int i = 0; i < nama.size(); i++) {
    //     cout << nama[i] << endl;
    // }
}