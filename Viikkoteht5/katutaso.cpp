#include "katutaso.h"
#include <iostream>
using namespace std;
Katutaso::Katutaso():Kerros() {

    as1 = new Asunto();
    as2 =new Asunto();
    cout<<"katutaso luotu"<<endl;
}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;

    as1-> maarita(2,100);
    as2-> maarita(2,100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
}
double Katutaso::laskeKulutus(double hinta)
{

    double tulos=(as1->laskekulutus(1)+as2->laskekulutus(1))*hinta;

    return tulos;
}
