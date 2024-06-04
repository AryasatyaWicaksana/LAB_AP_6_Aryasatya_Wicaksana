#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Assignment Operator
    a = 5;
    b = 7;

    // // Arithmetic Operator
    // int tambah = a + b;
    // int kurang = a - b;
    // int kali = a * b;
    // float bagi = a / b;
    // int mod = a % b;

    // cout << "a + b = " << tambah << endl;
    // cout << "a - b = " << kurang << endl;
    // cout << "a * b = " << kali << endl;
    // cout << "a / b = " << bagi << endl;
    // cout << "a mod b = " << mod << endl;

    // // Relational Operator
    // cout << (a == b) << endl;
    // cout << (a < b) << endl;
    // cout << (a <= b) << endl;
    // cout << (a > b) << endl;
    // cout << (a >= b) << endl;
    // cout << (a != b) << endl;

    // // Logical Operator
    // cout << (true && true) << endl;
    // cout << (true && false) << endl;
    // cout << (false && true) << endl;
    // cout << (false && false) << endl;

    // cout << (true || true) << endl;
    // cout << (true || false) << endl;
    // cout << (false || true) << endl;
    // cout << (false || false) << endl;

    // cout << !true << endl;
    // cout << !false << endl;

    // // Bitwise Operator
    // cout << (4 & 7) << endl;
    // cout << (4 | 7) << endl;
    // cout << (4 ^ 7) << endl;
    // cout << (~4) << endl;
    // cout << (7 << 2) << endl;
    // cout << (7 >> 2) << endl;

    // Increment & Decrement Operator
    // Pre Increment
    ++a;
    --a;
    ++b;
    --b;
    cout << a++ << endl;
    cout << a << endl;
    // Post Increment
    a++;
    a--;
    b++;
    b--;
    cout << a << endl;
    cout << ++a << endl;

    // Shorthand
    a = a + 2;
    a += 2;
    a -= 2;
    a *= 2;
    a /= 2;
}