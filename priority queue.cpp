#include <bits\stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> l; // gives max heap ..i.e..print max element first.

    l.push(1);
    l.push(2);
    l.push(3);
    l.push(4);

    cout << "max heap : ";
    for (int i = 0; i <=l.size(); i++)
    {
        cout << l.top() << endl;
        l.pop();
    }
    

    cout << "size : " << l.size()-1 << endl;
    cout << "front element : " << l.top() << endl;
    cout << "Empty or not : " << l.empty() << endl;

    priority_queue < int, vector<int>, greater<int>> mini;
   // gives min heap..i.e..print min element first.mini.push(1);
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    cout << "min heap : ";
    for (int i = 0; i <=l.size(); i++)
    {
        cout << mini.top() << endl;
        mini.pop();
    }

    cout << "size : " << mini.size() << endl;
    cout << "front element : " << mini.top() << endl;
    cout << "Empty or not : " << mini.empty() << endl;
}