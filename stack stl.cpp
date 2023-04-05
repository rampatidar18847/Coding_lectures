#include <bits\stdc++.h>
using namespace std;

int main()
{
    stack<int> l; // gives max heap ..i.e..print max element first.
    l.push(8);
    l.push(5);
    l.push(1);
    l.push(2);
    l.push(3);
    l.push(4);
    l.push(7);

    cout << l.top() << endl;
    cout << "stack : ";
    for (int i = 0; i <=l.size(); i++)
    {
        cout << l.top() << endl;
        l.pop();
    }
    

    cout << "size : " << l.size()<< endl;
    cout << "top element : " << l.top() << endl;
    cout << "Empty or not : " << l.empty() << endl;

    
}