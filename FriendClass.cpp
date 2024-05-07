#include <iostream>
using namespace std;

class siswa;
class orang
{
private:
    string nama;
public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa
{
    private:
        int id;
    public:
    void setid(int pId);
    void displayALL(orang &a);
};

void siswa::displayAll(orang &a)
{
    cout << id << endl << a.nama;
}
void orang::setNama(string pNama)
{
    nama = pNama;
}
void siswa::setid(int pId)
{
    id = pId;
}
int main()
{
    orang joko;
    joko.setNama("")
}