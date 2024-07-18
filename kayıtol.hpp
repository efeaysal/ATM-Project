//
//  kayıtol.hpp
//  ATM
//
//  Created by Efe Aysal on 18.07.2024.
//
#include "islemler.hpp"
#include "kullanıcı.hpp"
#include <iostream>
#ifndef kay_tol_hpp
#define kay_tol_hpp

#include <stdio.h>
using namespace std;

class kayıtol
{
    public:
        string isim;
        string soyisim;
        int yas;
        int hesapno;
        int bakiye;
        int sifre;
    public:
    void kayitol(string isim,string soyisim,int yas, int hesapno, int bakiye,int sifre);
    void bilgileriGoster();
    int getHesapBakiyesi();
   
    
    
};





#endif /* kay_tol_hpp */
