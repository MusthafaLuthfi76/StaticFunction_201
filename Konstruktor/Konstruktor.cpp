#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private :
    int nim;
    string nama;
public :
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswan(int iNim, string iNama);
    void cetak();
};

mahasiswa::mahasiswa() {
    nim = 0;
    nama = "";
}

int main()
{
    std::cout << "Hello World!\n";
}
