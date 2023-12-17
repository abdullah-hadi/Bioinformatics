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
    for (ll i = 0; i < s.sz; i++)
    {
        if (s[i] == 'T')
            cout << "U";
        else
            cout << s[i];
    }

    return 0;
}
