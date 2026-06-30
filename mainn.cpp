#include <iostream>
#include <windows.h>
#include "./pelanggan.h"

using namespace std;

void halamanAwal();
void loading();
void menuUtama();

Pelanggan pelanggan;

int main()
{

    halamanAwal();

    loading();

    menuUtama();

    return 0;

}

void halamanAwal()
{

    system("cls");

    cout<<"=========================================================\n";
    cout<<"                     AKSARAKU\n";
    cout<<"=========================================================\n";
    cout<<"      Aplikasi Penjualan Produk Toko Buku\n";
    cout<<"=========================================================\n\n";

    cout<<"Selamat Datang...\n\n";

    system("pause");

}

void loading()
{

    system("cls");

    cout<<"Loading ";

    for(int i=0;i<30;i++)
    {

        cout<<(char)219;
        Sleep(60);

    }

    cout<<"\n";

}

void menuUtama()
{

    int pilih;

    do
    {

        system("cls");

        cout<<"=========================================\n";
        cout<<"              MENU UTAMA\n";
        cout<<"=========================================\n";

        cout<<"1. Login\n";
        cout<<"2. Registrasi\n";
        cout<<"3. Keluar\n";

        cout<<"=========================================\n";

        cout<<"Pilihan : ";
        cin>>pilih;

        cin.ignore();

        switch(pilih)
        {

            case 1:

                pelanggan.login();

            break;

            case 2:

                pelanggan.registrasi();

            break;

            case 3:

                cout<<"\nTerima kasih.\n";

            break;

            default:

                cout<<"\nMenu tidak tersedia.";

                system("pause");

        }

    }

    while(pilih!=3);

}
