// C++ implementation of right rotation
// of an array K number of times
#include<bits/stdc++.h>
using namespace std;

// Function to rightRotate array
void RightRotate(int arr[], int n, int k)
{
	

    
    
    vector<int>v;
    int rotation = k%n;
    
    for(int i=0; i<n; i++)
    {
        int index = (i + n - rotation)%n;
        v.push_back(arr[index]);
    }
    
    for(int i=0; i<v.size(); i++)
    {
        arr[i] = v[i];
    }

}
	
// Driver code
int main()
{
	int Array[] = { 1, 2, 3, 4, 5 };
	int N = sizeof(Array) / sizeof(Array[0]);
	int K = 2;
	
	RightRotate(Array, N, K);
	for(int i=0; i<N; i++)
	{
		cout<<Array[i]<<" ";
	}
}

// This code is contributed by Surendra_Gangwar
