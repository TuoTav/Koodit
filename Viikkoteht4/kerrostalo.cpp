#include "kerrostalo.h"
#include <iostream>
using namespace std;
Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"maaritellaan koko kerrostalon asunnot"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();



}

double Kerrostalo::laskeKulutus(double kerrosmaara)
{
    double tulos=+eka.laskeKulutus(1)+(toka.laskeKulutus(1))*kerrosmaara;
    return tulos;
}
