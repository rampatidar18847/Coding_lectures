#include<bits/stdc++.h>
using namespace std;

void subsq(string str,int  i,int n,string ans)
{
    if(i == n)
    {
        return;
    }else
    {
        subsq(str,i+1,n,ans);
        ans = ans + str[i];
        cout<<ans<<endl;
        subsq(str,i+1,n,ans);
    }

    
}

int main()
{
    string str = "abc";
    string ans = "";
    subsq(str,0,str.length(),ans);
}