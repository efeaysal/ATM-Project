# ATM-Project
ATM-Project
# ATM Project

Bu proje, kullanıcıların hesap bakiyelerini kontrol edebileceği, para yatırma ve çekme işlemleri yapabileceği basit bir ATM simülasyonudur. Proje C++ ile geliştirilmiştir.

## Kurulum

Bu projeyi yerel bilgisayarınıza klonlamak ve başlatmak için aşağıdaki adımları izleyin:

### Gereksinimler

- Git
- C++ derleyicisi (GCC, Clang, vs.)

### Adımlar

1. Depoyu klonlayın:

    ```sh
    git clone https://github.com/efeaysal/ATM-Project.git
    ```

2. Proje dizinine gidin:

    ```sh
    cd ATM-Project
    ```

3. `main` branch'ini oluşturun ve ona geçin:

    ```sh
    git checkout -b main
    ```

4. Tüm dosyaları stage'e ekleyin ve ilk commit'i yapın:

    ```sh
    git add .
    git commit -m "Initial commit"
    ```

5. `main` branch'ini GitHub'daki `origin` deposuna push edin:

    ```sh
    git push -u origin main
    ```

## Kullanım

Bu proje, kullanıcıların hesaplarına giriş yapmasını, bakiye sorgulamasını, para çekme ve yatırma işlemlerini gerçekleştirmesini sağlar. Projeyi çalıştırmak için bir C++ derleyicisi kullanarak derlemeniz ve çalıştırmanız gerekmektedir.

### Derleme ve Çalıştırma

Aşağıdaki komutları kullanarak projeyi derleyebilir ve çalıştırabilirsiniz:

```sh
g++ -o ATM main.cpp kayıtol.cpp
./ATM
