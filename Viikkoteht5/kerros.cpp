#include "kerros.h"
#include <iostream>
using namespace std;
Kerros::Kerros() {

    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();
    cout<<"kerros luotu"<<endl;

}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;

    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);

}
double Kerros::laskeKulutus(double hinta)
{

    double tulos=(as1->laskekulutus(1)+as2->laskekulutus(1)+as3->laskekulutus(1)+as4->laskekulutus(1))*hinta;
    return tulos;
}
