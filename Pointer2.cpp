#include <iostream>
using namespace std;

class mahasiswa
{
    public :
    int nim;

    void showNim()
    {
        cout << "No Induk" << nim << endl;
    }
};

int main ()
{
    mahasiswa mhs(1); // Object mhs
    mhs.showNim(); // Member Access Operator

    mahasiswa &refMhS = mhs; // pointer Reference refMhS
    refMhS.nim = 2; // Member Access Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; // pointer dereference pMhs
    pMhs->nim = 3: // arrow pointer
    pMhs->showNim ();
    return 0;
}