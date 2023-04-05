#include <bits\stdc++.h>
using namespace std;

template <class t>
class car
{
public:
   

    t add(t a,t b)
    {
        return a + b;
    }
};

int main()
{
    car<int>c;
    cout<<c.add(3,5);

    return 0;
}