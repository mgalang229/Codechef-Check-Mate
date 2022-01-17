#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int xk, yk;
		cin >> xk >> yk;
		int x1, y1;
		cin >> x1 >> y1;
		int x2, y2;
		cin >> x2 >> y2;
		string ans = "NO";
		if (xk == 1 || xk == 8 || yk == 1 || yk == 8) {
			// left
			if (xk == 1) {
				if ((x1 == 2 || x2 == 2) && (y1 != y2)) {
					if (abs(y1 - yk) > 1 && abs(y2 - yk) > 1){
						ans = "YES";
					}
				}
			}
			
			// right
			if (xk == 8) {
				if ((x1 == 7 || x2 == 7) && (y1 != y2)) {
					if (abs(y1 - yk) > 1 && abs(y2 - yk) > 1){
						ans = "YES";
					}
				}
			}
			
			// bottom
			if (yk == 1) {
				if ((y1 == 2 || y2 == 2) && (x1 != x2)) {
					if (abs(x1 - xk) > 1 && abs(x2 - xk) > 1){
						ans = "YES";
					}
				}
			}
			
			// up
			if (yk == 8) {
				if ((y1 == 7 || y2 == 7) && (x1 != x2)) {
					if (abs(x1 - xk) > 1 && abs(x2 - xk) > 1){
						ans = "YES";
					}
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
