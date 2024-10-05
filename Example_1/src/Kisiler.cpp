#include "Kisiler.hpp"

Kisi::Kisi(string isim ,int boy)
{
    this->isim=isim;
    this->boy=boy;
}

void Kisi::yaz()
{
    cout<< "Isim: "<< this->isim <<endl <<"Boy: "<< this->boy<<endl;
}
