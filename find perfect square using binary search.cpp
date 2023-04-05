#include <bits/stdc++.h>
using namespace std;
int binarysearch(int array[], int top, int bottom, int x)
{
    int ans;
    int mid = top + (bottom - top) / 2;
    while (top <= bottom)
    {

        int sqrt = mid * mid;
        if (sqrt == x)
        {
            return mid;
        }
        else if (sqrt < x)
        {
            ans = mid;
            top = mid + 1;
        }

        else
        {
            bottom = mid - 1;
        }
        mid = top + (bottom - top) / 2;
    }
    return ans;
}

int sqrt(int array[], int top, int bottom, int x)
{
    return binarysearch(array, top, bottom, x);
}

double morepercision(int x, int percision, int result1)
{
    double factor = 1;
    double ans = result1;

    for (int i = 0; i < percision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j*j < x; j=j+factor)
        {
            ans = j;
        }
        
    }
    return ans;
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};
    int n = sizeof(a) / sizeof(a[0]);

    int result1 = sqrt(a, 0, n - 1, 27);
    double result2 = morepercision(27, 3, result1);

    cout << "square element of 27 is : " << result1 << endl;
    cout << "perfect square element of 27 is : " << result2 << endl;
}
