#include <bits/stdc++.h>
using namespace std;


int getpivot(int arr[], int top, int bottom)
{
    int mid ;
    while (top < bottom)
    {
        mid = top + (bottom - top) / 2;
        if (arr[mid] < arr[mid+1])
        {
            top = mid + 1;
        }
        else
        {
            bottom = mid;
        }

        
    }

    return bottom;
}

int main()
{
    int a[] = {24,69,100,99,79,78,67,36};
    int n = sizeof(a) / sizeof(a[0]);
    
    cout<<n<<endl;
    int result1 = getpivot(a, 0, n);

    cout << "peak or largest element found at index " << result1 << endl;
}
