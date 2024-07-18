#ifndef KULLANICI_HPP
#define KULLANICI_HPP

#include <iostream>
#include <string>

using namespace std;

class Kullanici {
public:
    string ad;
    string soyad;
    int yas;
    string hesapNo;
    float hesapBakiyesi;
    int sifre;
public:
    Kullanici(string ad, string soyad, int yas, string hesapNo, float bakiye, int sifre);
    void bilgileriGoster();
    float getHesapBakiyesi();
    void setHesapBakiyesi(float bakiye);
   
};

#endif /* KULLANICI_HPP */
