#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xl, sl;
        cin >> xl >> sl;
        string x, s;
        cin >> x >> s;
 
        // string temp = x;
        int cnt = 0;
        while (x.size() < sl)
        {
            x += x;
            cnt++;
        }
 
        if (x.find(s) != string::npos)
        {
            cout << cnt << endl;
        }
        else
        {
            x += x;
            cnt++;
            if (x.find(s) != string::npos)
            {
                cout << cnt << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
