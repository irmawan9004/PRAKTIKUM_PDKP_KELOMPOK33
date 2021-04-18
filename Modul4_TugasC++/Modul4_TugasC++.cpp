#include <iostream>


using namespace std;

int footer(int total);

class nama {
public:
    void anggota()
    {

        cout << "\tKelompok 33 shift 2\n" << endl;
        cout << "\tMuhammad hafizh zikry 21120120120034" << endl;
        cout << "\tMuhammad rizal qowi al-azis 21120120140172" << endl;
        cout << "\tMuhammad irmawan 21120120130125" << endl;
        cout << "\tNaufal daffa' riswanda' 21120120130107" << endl;
       
    }
};
int main() {
    



}

int footer(int total)
{    int bayar, kembali;
    cout << "Total belanja anda adalah Rp." << total << endl;
    cout << "Masukkan nominal pembayaran : ";
    cin >> bayar;
    while (bayar<total)
    {
        cout << "\n Maaf, uang anda kurang \n\n";
            cout << "Masukkan nominal pembayaran : ";
        cin >> bayar;
    }
    kembali = bayar - total;
    cout << "\nKembalian anda : Rp " << kembali << endl;
    return 0;


}
