#include "kerrostalo.h"
#include <iostream>
using namespace std;
Kerrostalo::Kerrostalo()
{

    eka = new Katutaso();
    toka= new Kerros();
    kolmas = new Kerros();
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"maaritellaan koko kerrostalon asunnot"<<endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();



}

double Kerrostalo::laskeKulutus(double hinta)
{
    double tulos=+(eka->laskeKulutus(1)+toka->laskeKulutus(1)+kolmas->laskeKulutus(1))*hinta;
    return tulos;
}
