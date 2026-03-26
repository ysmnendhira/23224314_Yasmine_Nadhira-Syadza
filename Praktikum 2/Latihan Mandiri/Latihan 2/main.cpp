#include <iostream>

// Fungsi untuk mengkuadratkan nilai menggunakan pointer
void kuadratkan(int *val) {
    *val = (*val) * (*val);
}

int main() {
    int angka = 5;

    std::cout << "Nilai awal angka: " << angka << std::endl;

    // Mengirim alamat memori
    kuadratkan(&angka);

    std::cout << "Nilai setelah dikuadratkan: " << angka << std::endl;

    return 0;
}
