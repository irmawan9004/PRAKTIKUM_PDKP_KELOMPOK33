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
    nama myObj;
    myObj.anggota();

    int jumlah, pilih{}, total{}, harga{};
    int h_indomie, h_teh, h_roti, h_rokok;
    h_indomie = 3000;
    h_teh = 3500;
    h_roti = 4500;
    h_rokok = 20000;
    cout << "\n\n\t =============================\n";
    cout << "\t  SELAMAT DATANG DI INDOMEI \n";
    cout << "\t =============================\n\n";

while (pilih!=5)
    {
        
        cout << "\nSilahkan pilih barang yang ingin anda beli \n";
        cout << "1. Indomie (Rp." << h_indomie << ")\n";
        cout << "2. Teh Pucuk (Rp." << h_teh << ")\n";
        cout << "3. Sari Roti (Rp." << h_roti << ")\n";
        cout << "4. Rokok (Rp." << h_rokok << ")\n";
        cout << "5. Keluar \n";
        cout << "Pilih item (1-5) : ";
        cin >> pilih;
        switch (pilih) {
        case 1:
            cout << "\nAnda membeli 1 Indomie Rp.3000 \n";
            break;
        case 2:
            cout << "\nAnda membeli 1 Teh Pucuk Rp.3500 \n";
            break;
        case 3:
            cout << "\nAnda membeli 1 Sari Roti Rp.4500 \n";
            break;
        case 4:
            cout << "\nAnda membeli 1 Rokok Rp.20000 \n";
            break;
        case 5:
            cout << "\nTERIMA KASIH SUDAH BELANJA DI INDOMEI \n\n";
            break;
        default:
            cout << "\nMaaf, menu tidak ada \n";
            break;
        }

        if (pilih == 1) {
            harga = 3000;
        }
        else if (pilih == 2) {
            harga = 3500;
        }
        else if (pilih == 3) {
            harga = 4500;
        }
        else if (pilih == 4) {
            harga = 20000;
        }
        else if (total == 0) {
            return 0;
        }
        total += harga;
    }
    footer(total);

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
