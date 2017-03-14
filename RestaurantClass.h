#include <iostream>

using namespace std;

class Restaurant
{
private:
    string name; //nazwa restauracji
    string owner; // nazwisko wlasciciela
    string kindoffood; // rodzaj kuchni
    int seats; // ilosc miejsc
    int employees; // ilosc pracownikow
    float incomes; // przychody
    float surface; // powierzchni lokalu

public:
    Restaurant(string, string, string);
    ~Restaurant();
    void show();
};
