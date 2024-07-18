#include "kullanıcı.hpp"
#include <iostream>

using namespace std;

Kullanici::Kullanici(string ad, string soyad, int yas, string hesapNo, float bakiye, int sifre) {
    this->ad = ad;
    this->soyad = soyad;
    this->yas = yas;
    this->hesapNo = hesapNo;
    this->hesapBakiyesi = bakiye;
    this->sifre = sifre;
}

void Kullanici::bilgileriGoster() {
    cout << "Ad: " << ad << endl;
    cout << "Soyad: " << soyad << endl;
    cout << "Yaş: " << yas << endl;
    cout << "Hesap No: " << hesapNo << endl;
    cout << "Hesap Bakiyesi: " << hesapBakiyesi << endl;
}

float Kullanici::getHesapBakiyesi() {
    return hesapBakiyesi;
}

void Kullanici::setHesapBakiyesi(float bakiye) {
    hesapBakiyesi = bakiye;
}

