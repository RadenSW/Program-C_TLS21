#include <iostream>
using namespace std;
int main()
{
    int uangAnda;
    cout << "Berapa Uang Anda: ";
    cin >> uangAnda;
    int pilihannya;
    cout << "Menu Rumah Makan ini ada : " << endl;
    cout << "1. Gudeg\n";
    cout << "2. Soto\n" ;
    cout << "Dengan uang sebanyak itu, Anda bisa membeli : \n";

    if(uangAnda <= 6000) {
        cout << "Tidak beli apa apa" << endl;
    }
    else if(uangAnda >= 7000 && uangAnda <= 14000){
        cout << "Gudeg saja " << endl;
    }
    else if(uangAnda >= 15000 && uangAnda <= 22000){
        cout << " Gudeg atau Soto? " << endl;
    }
    else{
        cout << "Gudeg dan Soto" << endl;
    }
}
