#include <bits\stdc++.h>
using namespace std;

class car
{

public:
    int price;
    int petrol;

    car()
    {
        cout << "Default constructor called " << endl;
        cout << endl;
    }

    // parameterised constructor
    car(int p, int pe)
    {
        cout << "Parameterised Constructor" << endl;
        price = p;
        petrol = pe;
    }

    // copy constructor
    car(car &q)
    {
        cout << "copy constructor called" << endl;
        price = q.price;
        petrol = q.petrol;
    }

    void display()
    {
        cout << "value of price :" << price << endl;
        cout << "value of petrol :" << petrol << endl;
        cout << endl;
    }
};

int main()
{
    // default constructor
    car c;
    // parametrised consturctor
    car r(700000, 11);
    r.display();
    // copy constructor
    car s(r);
    s.display();
    // parameterised constructor
    car q(5454, 6);
    q.display();
}