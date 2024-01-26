#ifndef CHEFS_H
#define CHEFS_H
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
#endif // CHEFS_H
