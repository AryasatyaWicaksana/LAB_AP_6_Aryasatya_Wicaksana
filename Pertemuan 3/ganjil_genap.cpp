#include <iostream>
using namespace std;

int main() {
    int i;

    cout << "Masukkan angka : ";
    cin >> i;

    (i % 2 == 0) ? cout << "Genap" : cout << "Ganjil";

    // if (i % 2 == 0)
    // {
    //     cout << "Genap";
    // }
    // else {
    //     cout << "Ganjil";
    // }
}