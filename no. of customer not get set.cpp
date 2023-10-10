#include <iostream>
#include<unordered_set>
using namespace std;

int solve(int k, string s)
{
   if(s.size() == 0)
   {
      return 0;
   }
   unordered_set<char>set;
   int count =0;
   for (int i = 0; i < s.size(); i++)
   {
      if(set.find(s[i]) != set.end())
      {
         auto ele = set.find(s[i]);
         set.erase(ele);
      }else
      {
         if(set.size() >= k)
         {
            if(s[i] != s[i+1])
            {
               count++;
               set.insert(s[i]);
               
            }
            
            
         }else{
            set.insert(s[i]);
         }
      }
   }
   // for(auto st : set)
   // {
   //    cout<<st;
   // }
   return count;
   
}

int main()
{
   cout<<solve(2,"ABBAJJKZKZ");
}