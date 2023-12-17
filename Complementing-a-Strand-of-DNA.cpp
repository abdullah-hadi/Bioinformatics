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
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (ll i = 0; i < s.sz; i++)
    {
        if (s[i] == 'A')
        {
            cout << "T";
            continue;
        }

        if (s[i] == 'T')
        {
            cout << "A";
            continue;
        }

        if (s[i] == 'G')
        {
            cout << "C";
            continue;
        }

        if (s[i] == 'C')
        {
            cout << "G";
            continue;
        }
    }

    return 0;
}
