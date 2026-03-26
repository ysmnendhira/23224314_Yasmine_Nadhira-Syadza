#include <iostream>

// Fungsi untuk menghitung rata-rata
double hitungRataRata(double array[], int ukuran) {
    double total = 0;

    for (int i = 0; i < ukuran; i++) {
        total += array[i];
    }

    return total / ukuran;
}

int main() {
    // Array berisi 5 angka
    double data[5] = {10.5, 20.0, 15.5, 30.0, 24.0};

    // Memanggil fungsi
    double rata = hitungRataRata(data, 5);

    // Menampilkan hasil
    std::cout << "Rata-rata data: " << rata << std::endl;

    return 0;
}
