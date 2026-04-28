#include <iostream>
#include <string>

using namespace std;

class Barang
{
    public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilkanData()
    {
        cout << "--- Informasi Barang ---" << endl;
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        cout << "------------------------" << endl << endl;
    }
};

int main()
{
    Barang elektronik;
    elektronik.nama = "Laptop Gaming";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "12 April 2026";


}