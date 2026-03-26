#include <iostream>

class RekeningBank {
private:
    double saldo;  // atribut private

public:
    // Constructor
    RekeningBank(double saldo_awal) {
        saldo = saldo_awal;
    }

    // Method setor
    void setor(double jumlah) {
        saldo += jumlah;
        std::cout << "Setor berhasil. Saldo sekarang: " << saldo << std::endl;
    }

    // Method tarik
    void tarik(double jumlah) {
        if (jumlah > saldo) {
            std::cout << "Penarikan Gagal. Saldo tidak cukup." << std::endl;
        } else {
            saldo -= jumlah;
            std::cout << "Penarikan berhasil. Sisa saldo: " << saldo << std::endl;
        }
    }
};

int main() {
    // Membuat objek dengan saldo awal
    RekeningBank rekening(1000.0);

    // Melakukan transaksi
    rekening.setor(500.0);
    rekening.tarik(300.0);
    rekening.tarik(1500.0);

    return 0;
}
