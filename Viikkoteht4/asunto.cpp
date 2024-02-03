#include "asunto.h"
#include <iostream>

using namespace std;
Asunto::Asunto()
{
    cout<<"asunto luotu"<<endl;
}
double Asunto::laskekulutus(double a)
{
    double sas=asukasMaara*neliot;
    double tulos=sas*a;

    return tulos;
}
void Asunto::maarita(int as, int ne)
{
    cout<<"asunto maaritetty asukkaita="<<as<<"nelioita="<<ne<<endl;
    asukasMaara=as;
    neliot=ne;
}
