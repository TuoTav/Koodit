
#include "Chefs.h"







void Chef:: makeSalad()
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}
void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}
Chef::Chef(string s)
{
    name=s;

    cout<<"Chef "<<name<<" konstruktori"<<endl;
}
Chef::~Chef()
{
    cout<<"Chef "<<name<<" dekonstruktori"<<endl;
}
void ItalianChef::makePasta()
{
    cout<<"Chef "<<getName()<<" makes pasta with special recipe"<<endl;
    cout<<"Chef "<<getName()<<" uses jauhot = "<<jauhot<<endl;
    cout<<"Chef "<<getName()<<" uses vesi = "<<vesi<<endl;
}
string ItalianChef::getName()
{
    return name;
}
ItalianChef::ItalianChef(string a,int v, int j): Chef(a)
{
    name=a;
    vesi=v;
    jauhot=j;

}
ItalianChef::~ItalianChef()
{

}
