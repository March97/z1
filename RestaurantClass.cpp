#include <iostream>
#include "RestaurantClass.h"

using namespace std;

Restaurant::Restaurant(string n, string o, string k)
{
    name=n;
    owner=o;
    kindoffood=k;
}

Restaurant::~Restaurant()
{
    cout<<"Destruktor"<<endl;
}

void Restaurant::show()
{
    cout<<"Nazwa restauracji: "<<name<<endl;
    cout<<"Wlasciciel: "<<owner<<endl;
    cout<<"Rodzaj kuchni: "<<kindoffood<<endl;
    cout<<"Powierzchnia lokalu: "<<surface<<"m^2"<<endl;
    cout<<"Ilosc miejsc: "<<seats<<endl;
    cout<<"Ilosc pracownikow: "<<employees<<endl;
    cout<<"Przychody: "<<incomes<<"zl"<<endl;
}
