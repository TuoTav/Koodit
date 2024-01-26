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
    ItalianChef(string a);
    string getName();
    void makePasta();
    ~ItalianChef();
};


int main()
{
    Chef c("Jyrki");
    ItalianChef s("Mario");
    c.makeSalad();
    s.makePasta();
    c.makeSoup();



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
    cout<<"Chef "<<getName()<<" makes pasta"<<endl;
}
string ItalianChef::getName()
{
    return name;
}
ItalianChef::ItalianChef(string a): Chef(a)
{
    name=a;

}
ItalianChef::~ItalianChef()
{
    cout<<"Chef "<<name<<" dekonstruktori"<<endl;
}
