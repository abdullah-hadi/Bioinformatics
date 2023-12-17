///   ***   ---   |||		 In the name of ALLAH		|||   ---   ***   ///

#include <bits/stdc++.h>
#define nl cout << endl
#define sz size()
#define endl "\n"
#define pb push_back
#define sepi fixed << setprecision
#define testcase \
    ll t;        \
    cin >> t;    \
    while (t--)
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
typedef long long ll;
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    ll c = 0;
    for (ll i = 0; i < s1.sz; i++)
    {
        if (s1[i] != s2[i])
        {
            c++;
        }
    }
    cout << c;

    return 0;
}
