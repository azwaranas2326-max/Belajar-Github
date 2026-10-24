#include <iostream>
using namespace std;

int main() {
    int jenisKendaraan;
    int lamaParkir;
    long totalBiaya = 0;

    cout << "=== Program Penghitung Biaya Parkir ===" << endl;
    cout << "Pilih Jenis Kendaraan:" << endl;
    cout << "1. Mobil" << endl;
    cout << "2. Motor" << endl;
    cout << "Masukkan pilihan (1/2): ";
    cin >> jenisKendaraan;

    cout << "Masukkan lama parkir (jam): ";
    cin >> lamaParkir;

    // Pengecekan jenis kendaraan menggunakan percabangan if
    if (jenisKendaraan == 1) {
        // Tarif Mobil
        if (lamaParkir <= 2) {
            totalBiaya = 5000;
        } else {
            totalBiaya = 5000 + (lamaParkir - 2) * 2000;
        }
        cout << "\nJenis Kendaraan : Mobil" << endl;
        cout << "Lama Parkir     : " << lamaParkir << " jam" << endl;
        cout << "Total Biaya     : Rp" << totalBiaya << endl;
    } 
    else if (jenisKendaraan == 2) {
        // Tarif Motor
        if (lamaParkir <= 2) {
            totalBiaya = 3000;
        } else {
            totalBiaya = 3000 + (lamaParkir - 2) * 1000;
        }
        cout << "\nJenis Kendaraan : Motor" << endl;
        cout << "Lama Parkir     : " << lamaParkir << " jam" << endl;
        cout << "Total Biaya     : Rp" << totalBiaya << endl;
    } 
    else {
        cout << "\nPilihan jenis kendaraan tidak valid!" << endl;
    }

    return 0;
}