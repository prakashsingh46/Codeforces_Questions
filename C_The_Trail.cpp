#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin(), arr.end(), cmp)
#define sort(arr) sort(arr.begin(), arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i = 0; i < n; i++)
#define forl(n) for(long long i = 0; i < n; i++)
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string s;
        cin >> n >> m;
        cin >> s;

        vector<vector<ll>> grid(n, vector<ll>(m));
        ll total_sum = 0;

        // Read grid and compute initial row sums
        vll rowsum(n, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
                rowsum[i] += grid[i][j];
                total_sum += grid[i][j];
            }
        }

        // Compute magical sum x
        ll x = total_sum / (n + m - 1);

        // Compute column sums
        vll colsum(m, 0);
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                colsum[j] += grid[i][j];
            }
        }

        // Restore values on the path
        int i = 0, j = 0;
        for (char dir : s) {
            if (grid[i][j] == 0) {
                bool unique_in_row = true, unique_in_col = true;
                int row_zero_count = 0, col_zero_count = 0;

                // Count zeroes in the row
                for (int k = 0; k < m; k++) {
                    if (grid[i][k] == 0) row_zero_count++;
                }

                // Count zeroes in the column
                for (int k = 0; k < n; k++) {
                    if (grid[k][j] == 0) col_zero_count++;
                }

                unique_in_row = (row_zero_count == 1);
                unique_in_col = (col_zero_count == 1);

                if (unique_in_row) {
                    grid[i][j] = x - rowsum[i];
                    rowsum[i] += grid[i][j];
                    colsum[j] += grid[i][j];
                } else if (unique_in_col) {
                    grid[i][j] = x - colsum[j];
                    rowsum[i] += grid[i][j];
                    colsum[j] += grid[i][j];
                }
            }
            if (dir == 'D') i++;
            else if (dir == 'R') j++;
        }

        // Output the restored grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
