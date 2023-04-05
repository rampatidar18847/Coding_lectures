#include <bits/stdc++.h>
using namespace std;


int getpivot(int arr[], int top, int bottom)
{
    vector<int>v;
{

	
    for(int i=0;i<=bottom;i++)
    {
    	v.push_back(arr[i]);
	}
	if(rotate(arr[i]))
	{
	
	rotate(v.begin() , v.begin()+(bottom/2),v.end());
	for(int i=0;i<=bottom;i++)
	{
		cout<<arr[i]<<" ";
	}
}
    int mid ;
    while (top < bottom)
    {
         mid = top + (bottom - top) / 2;
        if (arr[mid] >= arr[0])
        {
            top = mid + 1;
        }
        else
        {
            bottom = mid;
        }
    }
    return arr[mid];
}
}

int main()
{
    int a[] = {34 ,7, 18, 26};
    int n = sizeof(a) / sizeof(a[0]);
    int element;

    int result1 = getpivot(a, 0, n-1);

    cout << "Pivot found at index " << result1 << endl;
}
