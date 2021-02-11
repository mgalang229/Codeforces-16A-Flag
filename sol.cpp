#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;   
  vector<vector<char>> v(n, vector<char>(m));
  for (int i = 0; i < n; i++) {
  	for (int j = 0; j < m; j++) {
  		cin >> v[i][j];
  	}
  }
	bool checker = true;
	for (int i = 0; i < n; i++) {
		// the horizontal row must have all equal digits
		for (int j = 0; j < m - 1; j++) {
			if (v[i][j] != v[i][j + 1]) {
			  checker = false;
			  break;
			}
		}                  
		if (i > 0) {
			// the previous row must NOT be the same as the current row
			for (int j = 0; j < m; j++) {
				if (v[i][j] == v[i - 1][j]) {
					checker = false;
					break;
				}
			}
		}
	}            
	cout << (checker ? "YES" : "NO") << '\n';
 	return 0;
}      