//
//  kayıtol.cpp
//  ATM
//
//  Created by Efe Aysal on 18.07.2024.
//
#include "kullanıcı.hpp"
#include <iostream>
#include "islemler.hpp"
#include "kayıtol.hpp"
void kayıtol::kayitol(string isim1, string soyisim1, int yas1, int hesapno1, int bakiye1, int sifre1)
{
    isim = isim1;
    soyisim= soyisim1;
    yas=yas1;
    hesapno=hesapno1;
    bakiye=bakiye1;
    sifre=sifre1;
};
void kayıtol::bilgileriGoster() {
    cout << "Ad: " << isim << endl;
    cout << "Soyad: " << soyisim << endl;
    cout << "Yaş: " << yas << endl;
    cout << "Hesap No: " << hesapno << endl;
    cout << "Hesap Bakiyesi: " << bakiye << endl;
}

int kayıtol::getHesapBakiyesi() {
    return bakiye;
}

