#ifndef CALC_H
#define CALC_H

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

float bagi(int a, int b) {
    if (b != 0) {
        return static_cast<float>(a) / b;
    } else {
        return 0; // Handle division by zero
    }
}

int modulo(int a, int b) {
    return a % b;
}

int pangkat(int a, int b) {
    int hasil = 1;
    for (int i = 0; i < b; ++i) {
        hasil *= a;
    }
    return hasil;
}

#endif
