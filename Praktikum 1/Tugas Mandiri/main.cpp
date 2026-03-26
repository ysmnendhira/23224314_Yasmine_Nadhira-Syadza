#include <iostream>

int main() {
    int angka;
    int jumlahPositif = 0;

    // Meminta user memasukkan tepat 5 angka
    for (int i = 1; i <= 5; i++) {
        std::cout << "Masukkan angka ke-" << i << ": ";
        std::cin >> angka;

        // Mengecek kategori angka
        if (angka > 0) {
            std::cout << "Angka positif\n";
            jumlahPositif += angka; // Menjumlahkan angka positif
        }
        else if (angka < 0) {
            std::cout << "Angka negatif\n";
        }
        else {
            std::cout << "Angka nol\n";
        }
    }

    // Menampilkan hasil akhir
    std::cout << "\nTotal jumlah angka positif: "
              << jumlahPositif << std::endl;

    return 0;
}
