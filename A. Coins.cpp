#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Problem Statement
//  2*x+k*y=n ? where x and y can be any not negative integer
//          we take input n and k. out "YES" if it is possible else output "NO"

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        ll n, k;
        cin >> n >> k;

        if (n % 2 == 0)
        {
            cout << "YES" << endl; // it will always true if n is even because of y=0
            continue;
        }

        // if n is odd then it can only possible if k is odd but if k>n then again its not possible
        if (k > n)
        {
            cout << "NO" << endl;
        }
        else if (k % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}