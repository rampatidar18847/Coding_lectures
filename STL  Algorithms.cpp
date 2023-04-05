#include <bits\stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
   

   // auto it = binary_search(v.begin(), v.end(),5);
   // auto it = rotate(v.begin(),v.begin()+3, v.end());
   // auto it = max_element(v.begin(), v.end());
    //auto it = min_element(v.begin(), v.end());
    // auto it = accumulate(v.begin(), v.end(),0);
    //auto it = count(v.begin(), v.end(), 3);
    auto it = find(v.begin(), v.end(), 4);
    if (it == v.end())
    {
        cout << "not present";
    }else
    {
        cout << *it;
    }
    

   
   
}