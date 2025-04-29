#include <iostream>
using namespace std;


  class mahasiswa{
    public :
    int nim;
    string nama;
    float nilai;


    void print_data(){
    cout << "NIM = " << nim << endl;
    cout << "NAMA = " << nama << endl;
    cout << "NILAI = " << nilai << endl;
    }
};


int main(){
    mahasiswa mhs;
    mhs.nim = 0273;
    mhs.nama = "Dimas";
    mhs.nilai = 50;

    mhs.print_data();
}