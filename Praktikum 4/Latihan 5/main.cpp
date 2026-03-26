#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>

class Partikel {
private:
    double x, y;
    double jarak_pusat;

public:
    Partikel(double pos_x, double pos_y) {
        x = pos_x;
        y = pos_y;
        jarak_pusat = 0.0;
    }

    // MODIFIKASI: jarak terhadap titik (5,5)
    void hitungJarak() {
        jarak_pusat = std::sqrt((x - 5.0) * (x - 5.0) + (y - 5.0) * (y - 5.0));
    }

    double getX() { return x; }
    double getY() { return y; }
    double getJarak() { return jarak_pusat; }
};

int main() {

    std::vector<Partikel> kumpulan_partikel;
    std::ifstream fileBaca("koordinat_mentah.txt");

    std::string header1, header2;
    double temp_x, temp_y;

    if (fileBaca.is_open()) {

        fileBaca >> header1 >> header2;

        while (fileBaca >> temp_x >> temp_y) {
            kumpulan_partikel.push_back(Partikel(temp_x, temp_y));
        }

        fileBaca.close();

    } else {
        std::cout << "Gagal! Pastikan file koordinat_mentah.txt sudah Anda buat." << std::endl;
        return 1;
    }

    // FASE KOMPUTASI
    for (int i = 0; i < kumpulan_partikel.size(); i++) {
        kumpulan_partikel[i].hitungJarak();
    }

    // FASE OUTPUT
    std::ofstream fileHasil("hasil_jarak.txt");

    if (fileHasil.is_open()) {

        for (int i = 0; i < kumpulan_partikel.size(); i++) {

            fileHasil << "Partikel " << i + 1
                      << " | Posisi: (" << kumpulan_partikel[i].getX()
                      << ", " << kumpulan_partikel[i].getY() << ") "
                      << "| Jarak: " << kumpulan_partikel[i].getJarak()
                      << "\n";
        }

        fileHasil.close();

        std::cout << "=> Selesai! Buka file 'hasil_jarak.txt' untuk melihat kalkulasinya." << std::endl;
    }

    return 0;
}
