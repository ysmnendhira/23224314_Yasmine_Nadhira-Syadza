#include <iostream>

int main() {
    int matriks[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int pengali = 2;

    // Loop Kolom (luar)
    for(int j = 0; j < 3; j++) {

        // Loop Baris (dalam)
        for(int i = 0; i < 2; i++) {
            matriks[i][j] = matriks[i][j] * pengali;
            std::cout << matriks[i][j] << "\t";
        }

        std::cout << std::endl;  // Pindah baris tiap kolom selesai
    }

    return 0;
}
