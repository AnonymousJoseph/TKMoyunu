#include <iostream>
#include <cstdlib>
#include <ctime>

std::string convert(int a) {
    switch(a) {
        case 0: return "Tas";
        case 1: return "Kagit";
        case 2: return "Makas";
        default: return "Hatali secim";
    }
}

int main() {
    srand(time(0)); // Rastgele sayı üreteciyi başlatır.

    int bilgisayar = rand() % 3;
    int kullanici;

    std::cout << "Merhaba! Tas-Kagit-Makas oyununa hosgeldin.\n";
    std::cout << "Lutfen seciminizi yapin. (0: Tas, 1: Kagit, 2: Makas): ";
    std::cin >> kullanici;

    std::cout << "Kullanicinin secimi: " << convert(kullanici) << std::endl;
    std::cout << "Bilgisayarin secimi: " << convert(bilgisayar) << std::endl;

    if(kullanici == bilgisayar) {
        std::cout << "Berabere!\n";
    } else if((kullanici == 0 && bilgisayar == 2) || (kullanici == 1 && bilgisayar == 0) || (kullanici == 2 && bilgisayar == 1)) {
        std::cout << "Tebrikler! Kazandin.\n";
    } else {
        std::cout << "Uzgunum! Kaybettin.\n";
    }

    return 0;
}
