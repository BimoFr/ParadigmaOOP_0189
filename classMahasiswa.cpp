#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
    int NIM;
    string nama;
    float nilai;

    void printData()
    {
        cout << "NIM: " << NIM << endl;
        cout << "Nama: " << nama << endl;
        cout << "Nilai: " << nilai << endl;
    }
};

int main()
{
    Mahasiswa mhs;
    mhs.NIM = 2024;
    mhs.nama = "Sule";
    mhs.nilai = 75.5;
    
    mhs.printData();
}