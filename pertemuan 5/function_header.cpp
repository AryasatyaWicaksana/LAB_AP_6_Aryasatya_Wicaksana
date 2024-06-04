#include <iostream>
#include "operasi.h"
#include "preprocessor.h"

using namespace std;

// Deklarasi fungsi sayHello
void sayHello(string name) {
    o << "Hello " << name << n;
}

// Deklarasi fungsi garis
void garis() {
    o << "================" << n;
}

// Deklarasi fungsi bintang
void bintang() {
    o << "***************" << n;
}

int main() {
    system("cls"); // Membersihkan layar (hanya untuk Windows)
    sayHello("AP6");
    garis();
    bintang();
    o << tambah(2, 3) << n;
    o << kurang(2, 3) << n;
    o << kali(2, 3) << n;
    o << bagi(2, 3) << n;
    o << PI << n;
    return 0;
}
