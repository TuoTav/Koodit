#include <iostream>

using namespace std;

class Chef{
protected:
    string name;
public:
    Chef(string s);
    void makeSalad();
    void makeSoup();
    ~Chef();

};

class ItalianChef: public Chef
{
public:
    ItalianChef(string a,int v, int j);
    string getName();
    void makePasta();
    ~ItalianChef();
private:
    int vesi;
    int jauhot;
};


int main()
{

    ItalianChef s("Mario",);

    s.makePasta();




    return 0;
}
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
    cout<<"Chef "<<name<<" dekonstruktori"<<endl;
}
