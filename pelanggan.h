#ifndef PELANGGAN_H
#define PELANGGAN_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Pelanggan
{

private:

    string idPelanggan;
    string nama;
    string email;
    string username;
    string password;

public:

    Pelanggan();

    // Menu
    void registrasi();
    void login();
    void dashboard();

    // Function
    string buatID();
    bool cekUsername(string user);
    bool cekLogin(string user,string pass);

    // File
    void simpanData();
    void tampilProfil();

};

#endif
