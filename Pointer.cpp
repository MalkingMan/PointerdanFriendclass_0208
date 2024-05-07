#include <iostream>
using namespace std;

class PersegiPanjang
{
public:
    int panjang, lebar;
    int luaspersegipanjang(int b, int a)
    {
        return a*b;
    }
};

class Segitiga()
{
    public :
    int tinggi,
        alas; 
    
    int luassegitiga(int a, int t)
    {
        return 0.5 * a * t;
    }

    int hitung (PersegiPanjang p)
    {
        return p.panjang;
    }

};

int main()
{
    PersegiPanjang pp;
    Segitiga sg;
    cout << "Masukkan Panjang :";
    cin >> pp.panjang;
    cout << "Masukkan Lebar :";
    cin >> pp.lebar;
}
