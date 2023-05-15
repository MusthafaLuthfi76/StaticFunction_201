#include <iostream>
using namespace std;

class angka {
private :
    int* arr;
    int panjang;
public :
    angka(int);             //Constructor
    ~angka();               //Destructor
    void cetakdata();
    void isidata();
};

//Definisi member function
angka::angka(int i) {       //Constructor
    panjang = i;
    arr = new int[i];
    isidata();
}

angka::~angka() {           //Destructor
    cout << endl;
    cetakdata();
    delete[]arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakdata() {
    for (int i = 1;i <= panjang; i++) {
        cout << i << " = " << arr[i] << endl;
    }
}

void angka::isidata() {
    for (int i = 1;i <= panjang; i++) {
        cout << i << " = "; cin >> arr[i];
    }
    cout << endl;
}

int main()
{
    std::cout << "Hello World!\n";
}
