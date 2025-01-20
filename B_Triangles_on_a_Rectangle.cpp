#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for (int i = 0; i < n; i++)
#define forl(n) for (long long i = 0; i < n; i++)
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll w, h;
        cin >> w >> h;

        // Read top and bottom coordinates
        int kup, kdown;
        cin >> kup;
        vll up(kup);
        fori(kup) cin >> up[i];

        cin >> kdown;
        vll down(kdown);
        fori(kdown) cin >> down[i];

        // Read left and right coordinates
        int kleft, kright;
        cin >> kleft;
        vll left(kleft);
        fori(kleft) cin >> left[i];

        cin >> kright;
        vll right(kright);
        fori(kright) cin >> right[i];

        // Calculate maximum area for each pair of sides
        ll area1 = (up[kup - 1] - up[0]) * h;
        ll area2 = (down[kdown - 1] - down[0]) * h;
        ll area3 = (left[kleft - 1] - left[0]) * w;
        ll area4 = (right[kright - 1] - right[0]) * w;

        // The maximum area is the largest of the four computed areas
        ll ans = max({area1, area2, area3, area4});
        cout << ans << endl;
    }
    return 0;
}
