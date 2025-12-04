#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        long long n; 
        cin >> n;
        vector<long long> divisors;

        // Collect divisors
        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i != n / i) divisors.push_back(n / i);
            }
        }

        sort(divisors.begin(), divisors.end());

        long long ans = 1, curr = 1;
        for (int i = 1; i < divisors.size(); i++) {
            if (divisors[i] == divisors[i - 1] + 1) {
                curr++;
            } else {
                curr = 1;
            }
            ans = max(ans, curr);
        }

        cout << ans << endl;
    }
}
