#include <iostream>

using namespace std;

class Restaurant
{
private:
    string name; //nazwa restauracji
    string owner; // nazwisko wlasciciela
    string kindoffood; // rodzaj kuchni
    unsigned int seats; // ilosc miejsc
    unsigned int employees; // ilosc pracownikow
    float incomes; // przychody
    float surface; // powierzchni lokalu

public:
    Restaurant(string="brak", string="brak", string="brak", unsigned int=0, unsigned int=0, float=0);
    ~Restaurant();
    void show();
};
