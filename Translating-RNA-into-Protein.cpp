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
    // ifstream f("rosalind_prot (2).txt");
    // if (f)
    // {
    //     ostringstream ss;
    //     ss << f.rdbuf();
    //     s = ss.str();
    // }
    cin >> s;
    ll i = 0;
    while (1)
    {

        if (s[i] == 'U' && s[i + 1] == 'A' && s[i + 2] == 'A')
        {
            return 0;
        }
        if (s[i] == 'U' && s[i + 1] == 'A' && s[i + 2] == 'G')
        {
            return 0;
        }
        if (s[i] == 'U' && s[i + 1] == 'G' && s[i + 2] == 'A')
        {
            return 0;
        }
        if (s[i] == 'U' && s[i + 1] == 'U' && s[i + 2] == 'U')
        {
            cout << "F";
            i += 3;
        }

        if (s[i] == 'U' && s[i + 1] == 'U' && s[i + 2] == 'C')
        {
            cout << "F";
            i += 3;
        }

        if (s[i] == 'U' && s[i + 1] == 'U' && s[i + 2] == 'A')
        {
            cout << "L";
            i += 3;
        }
        if (s[i] == 'U' && s[i + 1] == 'U' && s[i + 2] == 'G')
        {
            cout << "L";
            i += 3;
        }

        if (s[i] == 'U' && s[i + 1] == 'C' && s[i + 2] == 'U')
        {
            cout << "S";
            i += 3;
        }

        if (s[i] == 'U' && s[i + 1] == 'C' && s[i + 2] == 'C')
        {
            cout << "S";
            i += 3;
        }

        if (s[i] == 'U' && s[i + 1] == 'C' && s[i + 2] == 'A')
        {
            cout << "S";
            i += 3;
        }

        if (s[i] == 'U' && s[i + 1] == 'C' && s[i + 2] == 'G')
        {
            cout << "S";
            i += 3;
        }

        if (s[i] == 'U' && s[i + 1] == 'A' && s[i + 2] == 'U')
        {
            cout << "Y";
            i += 3;
        }

        if (s[i] == 'U' && s[i + 1] == 'A' && s[i + 2] == 'C')
        {
            cout << "Y";
            i += 3;
        }

        if (s[i] == 'U' && s[i + 1] == 'G' && s[i + 2] == 'U')
        {
            cout << "C";
            i += 3;
        }

        if (s[i] == 'U' && s[i + 1] == 'G' && s[i + 2] == 'C')
        {
            cout << "C";
            i += 3;
        }
        if (s[i] == 'U' && s[i + 1] == 'G' && s[i + 2] == 'G')
        {
            cout << "W";
            i += 3;
        }
        if (s[i] == 'C' && s[i + 1] == 'U' && s[i + 2] == 'U')
        {
            cout << "L";
            i += 3;
        }
        if (s[i] == 'C' && s[i + 1] == 'U' && s[i + 2] == 'C')
        {
            cout << "L";
            i += 3;
        }
        if (s[i] == 'C' && s[i + 1] == 'U' && s[i + 2] == 'A')
        {
            cout << "L";
            i += 3;
        }
        if (s[i] == 'C' && s[i + 1] == 'U' && s[i + 2] == 'G')
        {
            cout << "L";
            i += 3;
        }

        if (s[i] == 'C' && s[i + 1] == 'C' && s[i + 2] == 'U')
        {
            cout << "P";
            i += 3;
        }

        if (s[i] == 'C' && s[i + 1] == 'C' && s[i + 2] == 'C')
        {
            cout << "P";
            i += 3;
        }

        if (s[i] == 'C' && s[i + 1] == 'C' && s[i + 2] == 'A')
        {
            cout << "P";
            i += 3;
        }

        if (s[i] == 'C' && s[i + 1] == 'C' && s[i + 2] == 'G')
        {
            cout << "P";
            i += 3;
        }
        if (s[i] == 'C' && s[i + 1] == 'A' && s[i + 2] == 'U')
        {
            cout << "H";
            i += 3;
        }
        if (s[i] == 'C' && s[i + 1] == 'A' && s[i + 2] == 'C')
        {
            cout << "H";
            i += 3;
        }
        if (s[i] == 'C' && s[i + 1] == 'A' && s[i + 2] == 'A')
        {
            cout << "Q";
            i += 3;
        }
        if (s[i] == 'C' && s[i + 1] == 'A' && s[i + 2] == 'G')
        {
            cout << "Q";
            i += 3;
        }
        if (s[i] == 'C' && s[i + 1] == 'G' && s[i + 2] == 'U')
        {
            cout << "R";
            i += 3;
        }
        if (s[i] == 'C' && s[i + 1] == 'G' && s[i + 2] == 'C')
        {
            cout << "R";
            i += 3;
        }
        if (s[i] == 'C' && s[i + 1] == 'G' && s[i + 2] == 'A')
        {
            cout << "R";
            i += 3;
        }
        if (s[i] == 'C' && s[i + 1] == 'G' && s[i + 2] == 'G')
        {
            cout << "R";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'U' && s[i + 2] == 'U')
        {
            cout << "I";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'U' && s[i + 2] == 'C')
        {
            cout << "I";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'U' && s[i + 2] == 'A')
        {
            cout << "I";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'U' && s[i + 2] == 'G')
        {
            cout << "M";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'C' && s[i + 2] == 'U')
        {
            cout << "T";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'C' && s[i + 2] == 'C')
        {
            cout << "T";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'C' && s[i + 2] == 'A')
        {
            cout << "T";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'C' && s[i + 2] == 'G')
        {
            cout << "T";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'A' && s[i + 2] == 'U')
        {
            cout << "N";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'A' && s[i + 2] == 'C')
        {
            cout << "N";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'A' && s[i + 2] == 'A')
        {
            cout << "K";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'A' && s[i + 2] == 'G')
        {
            cout << "K";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'G' && s[i + 2] == 'U')
        {
            cout << "S";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'G' && s[i + 2] == 'C')
        {
            cout << "S";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'G' && s[i + 2] == 'A')
        {
            cout << "R";
            i += 3;
        }
        if (s[i] == 'A' && s[i + 1] == 'G' && s[i + 2] == 'G')
        {
            cout << "R";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'U' && s[i + 2] == 'U')
        {
            cout << "V";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'U' && s[i + 2] == 'C')
        {
            cout << "V";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'U' && s[i + 2] == 'A')
        {
            cout << "V";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'U' && s[i + 2] == 'G')
        {
            cout << "V";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'C' && s[i + 2] == 'U')
        {
            cout << "A";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'C' && s[i + 2] == 'C')
        {
            cout << "A";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'C' && s[i + 2] == 'A')
        {
            cout << "A";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'C' && s[i + 2] == 'G')
        {
            cout << "A";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'A' && s[i + 2] == 'U')
        {
            cout << "D";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'A' && s[i + 2] == 'C')
        {
            cout << "D";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'A' && s[i + 2] == 'A')
        {
            cout << "E";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'A' && s[i + 2] == 'G')
        {
            cout << "E";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'G' && s[i + 2] == 'U')
        {
            cout << "G";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'G' && s[i + 2] == 'C')
        {
            cout << "G";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'G' && s[i + 2] == 'A')
        {
            cout << "G";
            i += 3;
        }
        if (s[i] == 'G' && s[i + 1] == 'G' && s[i + 2] == 'G')
        {
            cout << "G";
            i += 3;
        }
    }

    return 0;
}
