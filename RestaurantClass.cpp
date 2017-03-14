#include <iostream>
#include "RestaurantClass.h"

using namespace std;

void Restaurant::show()
{
    cout<<"Nazwa restauracji: "<<name<<endl;
    cout<<"Wlasciciel: "<<owner<<endl;
    cout<<"Rodzaj kuchni: "<<kindoffood<<endl;
    cout<<"Powierzchnia lokalu: "<<surface<<"m^2"<<endl;
    cout<<"Ilosc miejsc: "<<seats<<endl;
    cout<<"Ilosc pracownikow: "<<employees<<endl;
    cout<<"Przychody: "<<incomes<<" zl"<<endl;
}

Restaurant::Restaurant(string n, string o, string k, unsigned int s, unsigned int e, float sur)
{
    name=n;
    owner=o;
    kindoffood=k;
    seats=s;
    employees=e;
    surface=sur;
    incomes=0;
}

Restaurant::~Restaurant()
{
    cout<<"Destruktor"<<endl;
}
