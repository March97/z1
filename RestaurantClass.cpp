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
