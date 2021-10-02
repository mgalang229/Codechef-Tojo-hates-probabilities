#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		double n, m;
		cin >> n >> m;
		// view the image in this repository for better understanding
		// Answer is N+M-1 because after sum of probabilities of all cells in same diagonal is 1.
		cout << fixed << setprecision(6) << n + m - 1 << '\n';
	}
	return 0;
}
