#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[] = {3,1,5,7,1,2,2};
	int n = sizeof(a) / sizeof(a[0]);
	int b[n];
	int c[n];
	

	int maxi = *max_element(a,a+n);
    
	for (int i = 1; i <=n; i++)
	{
		b[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		b[a[i]]++;
	}
	
	
	for (int i = 2; i <=maxi; i++)
	{
		b[i] = b[i] + b[i-1];
	}

	for (int i = n-1; i>=0; i--)
	{
		c[--b[a[i]]] = a[i];
	}

	for (int i = 0; i < n; i++)
	{
		a[i] = c[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	
	
	
	
}
