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

void Restaurant::load()
{
    cout<<"Wpisz dane potrzebne do utworzenia restauracji: "<<endl;
    cout<<"Nazwa restauracji: "; cin>>name;
    cout<<"Wlasciciel: "; cin>>owner;
    cout<<"Rodzaj kuchni: "; cin>>kindoffood;
    cout<<"Powierzchnia lokalu w m^2: "; cin>>surface;
    cout<<"Ilosc miejsc: "; cin>>seats;
    cout<<"Ilosc pracownikow: "; cin>>employees;
    cout<<"Przychody w zl: "; cin>>incomes;
    cout<<endl;
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
