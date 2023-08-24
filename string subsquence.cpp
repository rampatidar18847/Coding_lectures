#include<bits/stdc++.h>
using namespace std;

void subsq(string str,int  i,int n,string ans,vector<string>&res)
{
    if(i == n)
    { 
        return;
    }else
    {
        subsq(str,i+1,n,ans,res);
        ans = ans + str[i];
        res.push_back(ans);
        subsq(str,i+1,n,ans,res);
    }

    
}

int main()
{
    string str = "abc";
    string ans = "";
    vector<string>res;
    subsq(str,0,str.length(),ans,res);
    sort(res.begin(),res.end());
    for(int i=0; i<res.size(); i++)
    {
    	cout<<res[i]<<endl;
	}
}
