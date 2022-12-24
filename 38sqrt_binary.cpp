#include <iostream>
using namespace std;

// ## Find sqrt using binary search with time complexity of big 0f (logn).......
int binary_sqrt(int n)
{
    int ans = -1;
    int s = 0, e = n, mid = s + (e - s) / 2;
    while (s <= e)

    {
        int squre = mid * mid;
        if (squre == n)
        {
            // ans = mid;
            return mid;
        }
        else if (squre > n)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
double presious_value(int n, int value, int intial_value)
{
    double f = 1;
    double ans = intial_value;
    for (int i = 0; i < value; i++)
    {
        f = f / 10;
        for (double j = ans; j * j <= n; j = j + f)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    while (1)
    {
        double n, decimal;
        cout << "Enter Number whose squre root you want ?" << endl;
        cin >> n;
        if (n == 0)
        {
            cout << "You are out from process " << endl;
            break;
        }

        int k = binary_sqrt(n);
        cout << "Also Enter Decimal range " << endl;
        cin >> decimal;
        cout << "Squre root of " << n << " is " << presious_value(n, decimal, k) << endl;
        cout << "*******************************************************************************************************" << endl;
    }

    return 0;
}