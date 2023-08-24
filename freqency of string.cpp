#include<iostream>
using namespace std;

int main()
{
   char str[100] = "ram patidar";
   int i =0;
   int j;
   int count[26] {0};

   while(str[i] != '\0')
   {
      if(str[i] >='a' && str[i] <='z')
      {
         j = str[i] - 'a';
         ++count[j];
      }
      i++;
   }

   for (int i = 0; i < 26; i++)
   {
      if(count[i] > 0)
      {
         cout<<char(i+'a')<<"frequency is  "<<count[i]<<endl;
      }
   }
   
}