#include <iostream>
using namespace std;

int main()
{
    string nama;
    cout<<"Program Segitiga Tulisan\n\n";
    cout<<"Masukkan Nama: ";
    cin>>nama; //masukkan string
    cout<<endl;
    int i=nama.length()-1; //menghitung jumlah string
    for (i;i>=0;i--){ //perulangan sebanyak jumlah string (decrement)
        for(int a=0;a<=i;a++){ //perulangan sebanyak perulangan ke-n
            cout<<nama[a]; //nampilin hasilnya
        }
        cout<<endl;
    }
    return 0;
}
