
#include <iostream>
#include "kerrostalo.h"
using namespace std;
int main()
{

    Kerrostalo* K;
    K= new Kerrostalo();
    cout<<"Kerrostalon kulutus= "<<K->laskeKulutus(1)<<endl;
    delete K;







}
