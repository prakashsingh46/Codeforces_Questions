#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll x, y;
        cin >> n >> x >> y;
        vll v(n);
        ll sum = 0;
        fori(n) {
            cin >> v[i];
            sum += v[i];
        }
        ll newx = sum - x;
        ll newy = sum - y;

        sort(v.begin(), v.end()); // Sort the vector

        ll ct = 0;
        fori(n) {
            ll curr = v[i];

            // Find the range of valid elements for pairing
            auto l = lower_bound(v.begin() + i + 1, v.end(), newy - curr);
            auto r = upper_bound(v.begin() + i + 1, v.end(), newx - curr);

            // Add the count of valid pairs
            ct += (r - l);
        }

        cout << ct << endl;
    }
    return 0;
}
