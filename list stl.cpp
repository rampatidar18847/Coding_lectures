#include <bits\stdc++.h>
using namespace std;

int main()
{
    list<int> l; // gives max heap ..i.e..print max element first.
    l.push_back(4);
    l.push_back(6);
    l.push_back(2);

    cout << l.front() << endl;
    cout << "stack : ";
    for (int i = 0; i <=l.size(); i++)
    {
        cout << l.front() << endl;
        l.end();
    }
    

    cout << "size : " << l.size()<< endl;
    cout << "top element : " << l.front() << endl;
    cout << "Empty or not : " << l.empty() << endl;

    
}