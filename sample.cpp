#include<bits/stdc++.h>
using namespace std;


int main()
{
    
   int a[] = { 0, 1, 2, 3, 4, 5,9,4,6,3,5,2};
   int n = sizeof(a) / sizeof(a[0]);
   int k;
   cin>>k;

   for (int i = 0; i < n-k+1; i++)
   {
     for (int j = 0; j < k; j++)
     {
        sum += a[i+j];
     }
     
   }
   
    
}