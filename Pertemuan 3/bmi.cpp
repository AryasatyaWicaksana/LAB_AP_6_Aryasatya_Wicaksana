#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float tb,bb,bmi;

    cout << "Masukkan Tinggi Badan Anda : ";
    cin >> tb;
    cout << "Masukkan Berat Badan Anda : ";
    cin >> bb;
    // rumus untuk menghitung bmi
    tb = (tb * 0.01);
    bmi = bb / (tb * tb);
    //untuk memunculkan output 2 angka di belakang koma
    cout << fixed << setprecision(2) << bmi << endl; 
    // kondisi untuk kategori bmi user 
    if (bmi < 18.5) {
        cout << "Kamu underweight";
    } else if (bmi >= 18.5 && bmi <= 25) {
        cout << "Kamu normal";
    } else if (bmi >= 25 && bmi <= 30) {
        cout << "Kamu overweight";
    }
    else if (bmi > 30) {
        cout << "Kamu obesitas";
    // jika tidak ada maka
    } else {
        cout << "Tidak Valid";
    }
}