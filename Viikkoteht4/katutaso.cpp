#include "katutaso.h"
#include <iostream>
using namespace std;
Katutaso::Katutaso():Kerros() {
    cout<<"katutaso luotu"<<endl;
}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;

    as1.maarita(2,100);
    as2.maarita(2,100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
}
double Katutaso::laskeKulutus(double asluku)
{

    double tulos=(as1.laskekulutus(1)+as2.laskekulutus(1))*asluku;

    return tulos;
}
