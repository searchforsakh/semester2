#include <iostream>
using namespace std;

// Function untuk menghitung luas persegi
int hitungLuas(int sisi) {
    return sisi * sisi;
}

int main() {
    int sisi, luas;

    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi;

    // Memanggil function
    luas = hitungLuas(sisi);

    cout << "Luas persegi adalah: " << luas << endl;

    return 0;
}