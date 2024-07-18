#include "kayıtol.hpp"
#include <iostream>
#include <vector>


using namespace std;
// kullanıcı Bilgilerini Girip Ardınddan 1- Hesap Bakiyesi 2-Para çekme 3- para yatırma 4- Para Gönderme Yapabilmeli

// Kullanıcı bilgilerini saklamak için vektör
vector<kayıtol> kullanıcılar;

// Kullanıcı kayıt fonksiyonu
void kullaniciKayit(string isim, string soyisim, int yas, int hesapno, int bakiye, int sifre)
{
    kayıtol yeniKullanici;
    yeniKullanici.kayitol(isim, soyisim, yas, hesapno, bakiye, sifre);
    kullanıcılar.push_back(yeniKullanici);
}

// Kullanıcı doğrulama fonksiyonu
kayıtol* kullaniciDogrula(int hesapno, int sifre)
{
    for (auto& kullanici : kullanıcılar) // burayı chat gpt yaptı anlamadım // const auto& kullanici ifadesi, kullanıcılar vektöründeki her bir öğeye (kayıtol nesnesine) referans ile erişmemizi sağlar. const ifadesi, bu nesnelerin değiştirilmeyeceğini belirtir. HOCAM BURAYI MİNİK BİR ÖZET GEÇEBİLİR MİYİZ const meselesi..
    {
        if (kullanici.hesapno == hesapno && kullanici.sifre == sifre)
        {
            cout << "Hoşgeldiniz, " << kullanici.isim << "!" << endl;
            return &kullanici;
        }
    }
    cout << "Yanlış bilgi, lütfen tekrar deneyin." << endl;
    return nullptr;
}


int ilkgiris()
{
    int girissecim;
    cout << "-------------------------------" << endl;
    cout << "| İlk kez Kayıt Yaptırıyorsan Lütfen 1 e bas hesabınız varsa başka bir tuşa basisiniz |" << endl;
    cin >>girissecim;
    if(girissecim==1)
    {
        string a,b;
        int c,d,e,f;
        cout << "---Sırasıyla -----" << endl;
        cout << "|  1. isim             |" << endl;
        cout << "|  2. soyisim            |" << endl;
        cout << "|  3. yas       |" << endl;
        cout << "|  4. hesap numarası            |" << endl;
        cout << "|  5. para miktari                 |" << endl;
        cout << "|  6. sifreni belirle                |" << endl;
        cout << "-------------------------------" << endl;
        
        cin >> a >> b >> c >> d >> e >> f;

        kullaniciKayit(a, b, c, d, e, f);
        
        
    } return 0;
}
int paracekme(int hesapno, int sifre) {
    // Kullanıcıyı doğrulama
    for (auto& kullanici : kullanıcılar) {
        if (kullanici.hesapno == hesapno && kullanici.sifre == sifre) {
            int cekilcekmiktar;
            cout << "Lütfen çekmek istediğiniz miktarı girin: ";
            cin >> cekilcekmiktar;
            
            if (cekilcekmiktar > kullanici.getHesapBakiyesi()) {
                cout << "Yetersiz bakiye." << endl;
                return kullanici.getHesapBakiyesi();
            }
            
            int yeniBakiye = kullanici.getHesapBakiyesi() - cekilcekmiktar;
            kullanici.bakiye = yeniBakiye; // Bakiye güncelleme
            cout << "İşlem Başarılı." << endl;
            cout << "Kalan Bakiye: " << yeniBakiye << endl;
            return yeniBakiye;
        }
    }
    
    cout << "Kullanıcı bulunamadı veya bilgiler yanlış." << endl;
    return -1; // Hata kodu
}
int parayatır(int hesapno, int sifre) {
    // Kullanıcıyı doğrulama
    for (auto& kullanici : kullanıcılar) {
        if (kullanici.hesapno == hesapno && kullanici.sifre == sifre) {
            int yatırcakmiktar;
            cout << "Lütfen çekmek istediğiniz miktarı girin: ";
            cin >> yatırcakmiktar;
            
            if (yatırcakmiktar > 5000) {
                cout << "Günlük Yatırma Limiti Aşıyor" << endl;
                return kullanici.getHesapBakiyesi();
            }
            
            int yeniBakiye = kullanici.getHesapBakiyesi() + yatırcakmiktar;
            kullanici.bakiye = yeniBakiye; // Bakiye güncelleme
            cout << "İşlem Başarılı." << endl;
            cout << "Yeni Bakiye: " << yeniBakiye << endl;
            return yeniBakiye;
        }
    }
    
    cout << "Kullanıcı bulunamadı veya bilgiler yanlış." << endl;
    return -1; // Hata kodu
}

void islemmenüsü()
{
    
    cout << "-------------------------------" << endl;
    cout << "|Hangi İslemi yapmak istersein |" << endl;
    cout << "-------------------------------" << endl;
    cout << "|  1. Para Yatirma             |" << endl;
    cout << "|  2. Para Cekme               |" << endl;
    cout << "|  3. Bakiye Sorgulama         |" << endl;
    cout << "|  4. Para Transferi           |" << endl;
    cout << "|  5. [Cikis]                  |" << endl;
    cout << "-------------------------------" << endl;


};



int main() {
    
    int secim; // işlem seçimi için
    int numaraHesap;
    int sifre;
    
    // Örnek kullanıcılar ekleniyor
    kullaniciKayit("ahmet", "aksay", 34, 1111111, 35000, 1234);
    kullaniciKayit("selim", "bor", 23, 11113331, 395000, 986);
    kullaniciKayit("ayşe", "soy", 23, 6789, 450000, 456);
    
    
    
    
    ilkgiris();
    
    cout << "-------------------------------" << endl;
    cout << "|           Hosgeldiniz!       |" << endl;
    cout << "-------------------------------" << endl;
    cout << "Lutfen Hesap numarası: " << endl;
    cin >> numaraHesap;
    cout << "Sifrenizi giriniz: " << endl;
    cin >> sifre;
    
    kayıtol* kullanici = kullaniciDogrula(numaraHesap, sifre);
        if (kullanici != nullptr)
        {
            do {
                islemmenüsü();
                cout << "Lütfen bir işlem seçin: ";
                cin >> secim;

                switch (secim)
                {
                    case 1:
                        parayatır(numaraHesap, sifre);
                        break;
                    case 2:
                        paracekme(numaraHesap, sifre);
                        break;
                    case 3:
                        cout << "Mevcut Bakiye: " << kullanici->getHesapBakiyesi() << endl;
                        break;
                    case 4:
                        int transfer;
                        cout << "Kime Transfer Edeceksiniz ismini yazin "  << endl;
                        cin>> transfer;
                        cout << " islem basarili Transfer Edildi  ---> " <<transfer<< endl;
                        break;
                    case 5:
                        cout << "Çıkış yapılıyor..." << endl;
                        break;
                    default:
                        cout << "Geçersiz seçim, lütfen tekrar deneyin." << endl;
                }
            } while (secim != 5);
        }
   

    
}

