#include <bits/stdc++.h>
using namespace std;

void reverse_each_word(string str)
{
    string word;
    
    reverse(str.begin(), str.end());
    stringstream ss(str);
    int count =0;

    while(ss >> word)
    {  
        reverse(word.begin(), word.end());
        count++;
        cout<<word<<" ";
    }
    cout<<endl;
    cout<<"Number of words in string is "<<count<<endl;
}

int main()
{
    string input = "reverse each words in string";
    
    count_each_word(input);
    reverse_each_word(input);
    reverse_sentence(input);
    
    return 0;
}
