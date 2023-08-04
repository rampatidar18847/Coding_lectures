#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    int count = 0;
    bool isprime = true;
    
    for (int i = 2; i <=10; i++)
    {
        isprime = true;
        for (int j = 2; j <= i/2; j++)
        {
            if(i%j == 0)
            {
                isprime = false;
            }
        }
        if (isprime)
        {
            cout<<i<<" is prime number"<<endl;
            count++;
        }
        


    }

    cout<<count;
    
}
